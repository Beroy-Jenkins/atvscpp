#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
   Estrutura  que define a Lista
   Lembrando que a a instrução: struct celulaLista *proximo
   é uma estrutura auto-referenciada, ou seja, neste caso
   é uma estrutura que aponta para a próxima estrutura.
*/
typedef struct celulaLista{
   int informacao;
   struct celulaLista *proximo;
}celula;

	int nLista = 0;
	int ntLista = 2;

int main(){
	printf("XXXXXX 	XXXXXXX	XXXXXX	   XX    X       X\nX     X	X      	X     X	  X  X    X     X\nX     X	X      	X    X 	 X    X    X   X\nXXXXXX 	XXXX   	XXXX   	X      X     X\nX     X	X      	X   X  	 X    X      X\nX     X	X      	X    X    X  X       X\nXXXXXX 	XXXXXXX	X     X	   XX        X");

	// Declarações
	celula *pLista[nLista];
	int continuar = 0;
	// Funções
	void initLista(celula **pRecebido);
	void insertLista(celula **pRecebido);
	void buscaListaSimples(celula **pRecebido);
	void removeElementoListaSimples(celula **pRecebido);
	void calculaMedia(celula **pRecebido);
	void encontraElementos(celula **pRecebido);
	void cargaInicial(celula **pRecebido,int ntLista);
	void mergeListas(celula **pLista, int l1, int l2);
	// Instruções
	pLista[nLista] = (celula *)malloc(sizeof(struct celulaLista));
	initLista(&pLista[nLista]);	

/*
	//nLista++;
	//pLista[nLista] = (celula *)malloc(sizeof(struct celulaLista));
	//initLista(&pLista[nLista]);	
	cargaInicial(pLista, ntLista);
	mergeListas(pLista, 0, 1);
	buscaListaSimples(&pLista[0]);
	buscaListaSimples(&pLista[1]);
	buscaListaSimples(&pLista[2]);
	
*/	
	
	
	
	
	do{
		printf("\nNumero da Lista atua: %d\n\n",(nLista+1));
		printf("0 - Sair\n");
		printf("1 - Inserir  \n");
		printf("2 - Consultar \n");
		printf("3 - Remover\n");
		printf("4 - Calcula Media\n");
		printf("5 - Adcionar lista\n");
		printf("6 - Ir para lista anterior\n");
		printf("7 - Ir para proxima lista\n");
		printf("8 - procurar elementos nessa lista\n");
		printf("9 - Unir duas listas em uma outra lista\n");
		printf("15 - Carga inicial \t\n (Adiciona uma seria de listas com elemetos)");
		scanf("%d", &continuar);
		switch(continuar){
			case 1:
				insertLista(&pLista[nLista]);
				break;
			case 2:
				buscaListaSimples(&pLista[nLista]);
			 	break;
			case 3:
				removeElementoListaSimples(&pLista[nLista]);
				break;
			case 4:
				calculaMedia(&pLista[nLista]);
				break;
			case 5:
				nLista++;
				ntLista++;
				pLista[nLista] = (celula *)malloc(sizeof(struct celulaLista));
				initLista(&pLista[nLista]);
				break;
			case 6:
				if(nLista == 0){
					printf("Esta e a primeira lista.");
				}else{
					nLista--;
				}
				break;
			case 7:
				if(nLista < ntLista){
						nLista++;
				}else{
					printf("Esta e a ultima lista.");
				}
				break;
			case 8:
				encontraElementos(&pLista[nLista]);
				break;
			case 15:
				ntLista = 3;
				cargaInicial(pLista, ntLista);
				break;
			case 0:
			 	exit(0);
			default:
			 	printf("Opcao Invalida. Informe novamente : \n");
		}
		getch();
	}while(continuar);

}
/*
   Inicialização da Lista Encadeada
*/
void initLista(celula **pRecebido){
	//pRecebido = (celula *)malloc(sizeof(struct celulaLista));
	(*pRecebido)->proximo = NULL;
}
/*
void copiaLista(celula **origem, celula **destino){
  temporario = (celula *)malloc(sizeof(celula));
         temporario = (*origem)->proximo;
         while(temporario != NULL){
            printf("Valor : %d\n", temporario->informacao);
            
            
            temporario = temporario->proximo;
         }
}
*/
// funcao carga inicial
void cargaInicial(celula **pRecebido, int ntLista) {
	for (int i = 0; i < ntLista; i++) {
		nLista = i;
		pRecebido[i] = (celula *)malloc(sizeof(struct celulaLista));
		initLista(&pRecebido[i]);	
		celula *itemLista = pRecebido[i];
		
		for (int l = 0; l < 3; l++){
			celula *temporario;
			int valor =(i + 1) * (l +1);

			temporario = (celula *)malloc(sizeof(celula));
			temporario->informacao = valor;
			temporario->proximo = NULL;
/*			
			temporario->proximo = (*pRecebido)->proximo;
			(*pRecebido)->proximo = temporario;
*/

			itemLista->proximo = temporario;
			itemLista = temporario;			
			
							
		}
	}
}


/*
   Função para Inserção no Início
*/
void insertLista1(celula **pRecebido){
	// Declarações
	celula *temporario;
	celula *novoItem;
	int valor;
	// Instruções
	printf("\nInforme um Valor a ser Inserido : ");
	scanf("%d", &valor);
	//cria novo item
	novoItem = (celula *)malloc(sizeof(celula));
	novoItem->informacao = valor;

	if((*pRecebido)->informacao != NULL){
		//pega o ultimo item da lista
	 	temporario = (celula *)malloc(sizeof(celula));	
	    temporario = (*pRecebido);
	    while(temporario->proximo != NULL){
	        temporario = temporario->proximo;
	    }
		temporario->proximo = novoItem;

	}else{
	//	*pRecebido = *novoItem;
		(*pRecebido) = (celula *)malloc(sizeof(celula));	
		(*pRecebido)->informacao = valor;

	}
	system("cls");
	printf("Valor Inserido: %d", valor);
}

void insertLista(celula **pRecebido){
	// Declarações
	celula *temporario;
	celula *novoItem;

	int valor;
	// Instruções
	printf("\nInforme um Valor a ser Inserido : ");
	scanf("%d", &valor);
	/*
	temporario = (celula *)malloc(sizeof(celula));
	temporario->informacao = valor; 
	temporario->proximo = (*pRecebido)->proximo;
	(*pRecebido)->proximo = temporario;
	*/
	
	novoItem = (celula *)malloc(sizeof(celula));
	novoItem->informacao = valor;
    novoItem->proximo = (*pRecebido)->proximo;
	(*pRecebido)->proximo = novoItem;
	
	//system("cls");
	//printf("Valor Inserido: %d", valor);
	
}

/*
   Função para Percorrer Elementos
*/
void buscaListaSimples(celula **pRecebido){
   // Declarações
      celula *temporario;
   // Instruções
   
      printf("**** buscaListaSimples\n");
  
      if((*pRecebido)->proximo == NULL){
         printf("Lista Vazia!\n");
      }
      else{
         temporario = (celula *)malloc(sizeof(celula));
         temporario = (*pRecebido)->proximo;
         while(temporario != NULL){
            printf("Valor : %d\n", temporario->informacao);
            temporario = temporario->proximo;
         }
      }
}
void calculaMedia(celula **pRecebido){
   // Declarações
      celula *temporario;
      int cont = 0; //contador
	  float soma = 0;
   // Instruções
      if((*pRecebido)->proximo == NULL){
         printf("Lista Vazia!\n");
      }
      else{
         temporario = (celula *)malloc(sizeof(celula));
         temporario = (*pRecebido)->proximo;
         while(temporario != NULL){
            soma+=temporario->informacao; //soma+= valor do elemento
		    cont++; //contador ++
            temporario = temporario->proximo;
         }
         printf("\nMedia %.2f",(soma/cont)); //calculando a soma dividido pelo contador
      }
}
/*
   Remove Elemento da Cabeça
*/
void removeElementoListaSimples(celula **pRecebido){
   // Declarações
      celula *temporario;
   // Instruções
      if((*pRecebido)->proximo == NULL){
         printf("\nLista Vazia!");
      }
      else{
         temporario = (*pRecebido)->proximo;
         (*pRecebido)->proximo = temporario->proximo;
         free(temporario);
      }
}
/*
   Encontrar elementos
*/

void encontraElementos(celula **pRecebido){
	// Declarações
	celula *temporario;
	int valor;
	bool find = 0;
	printf("\nInforme um elemento a ser encontrado : ");
	scanf("%d", &valor);
	
	// Instruções
	if((*pRecebido)->proximo == NULL){
		printf("Lista Vazia!\n");
	}
	else{
		temporario = (celula *)malloc(sizeof(celula));
		temporario = (*pRecebido)->proximo;
		while(temporario != NULL){
			if(valor == temporario->informacao){
				find = 1;
				break;
			} 
			temporario = temporario->proximo;
		}
		if(find == 1){
			printf("Elemento encontrado nessa lista");
		}else{
			printf("Elemento nao encontrado nessa lista");
		}
	}
}

void mergeLista(celula **celulaDestino, celula **celulaOrigem){
	// Declarações
	celula *ultimoItemDaLista;
	celula *t1;
	celula *temporario;
	celula *novoItem;
	celula *w;
	
	
     // pega o ultimo item da lista
	 ultimoItemDaLista = (celula *)malloc(sizeof(celula));
	 t1 = (celula *)malloc(sizeof(celula));
     
	 ultimoItemDaLista = (*celulaDestino);
     t1 = (*celulaDestino)->proximo;

     
     printf("celulaDestino\n");
     for (w = (*celulaDestino); w != NULL; w = w->proximo) {
  	 	printf("Valor : %d\n", w->informacao);
       	ultimoItemDaLista = w;
     }
     
     printf("celulaOrigem\n");
     for (w = (*celulaOrigem); w != NULL; w = w->proximo) {
     	printf("Valor : %d\n", w->informacao);
     }
     
     
     /*
	 while(t1 != NULL){
        ultimoItemDaLista = t1;
        t1 = t1->proximo;
     }
     */
	

	temporario = (celula *)malloc(sizeof(celula));
	temporario = (*celulaOrigem)->proximo;
	/*
	while(temporario != NULL){
		novoItem = (celula *)malloc(sizeof(celula));
		novoItem->informacao = temporario->informacao;
	    //novoItem->proximo = (*pRecebido)->proximo;

	    ultimoItemDaLista->proximo = novoItem;
		
		ultimoItemDaLista = novoItem;
		
		temporario = temporario->proximo;
	}
	*/
	
     for (w = (*celulaOrigem); w != NULL; w = w->proximo) {
		novoItem = (celula *)malloc(sizeof(celula));
		novoItem->informacao = w->informacao;
	    novoItem->proximo = NULL;

     	printf("novoItem->informacao  : %d\n", novoItem->informacao);

	    ultimoItemDaLista->proximo = novoItem;
		
		ultimoItemDaLista = novoItem;
     }
 	
}

void mergeListas(celula **pLista, int l1, int l2){
	// Declarações
	celula *novaLista;
	celula *lista1;
	celula *lista2;


	nLista++;
	ntLista++;
	pLista[nLista] = (celula *)malloc(sizeof(struct celulaLista));

	//pLista[ntLista] = (celula *)malloc(sizeof(struct celulaLista));
	initLista(&pLista[nLista]);
	lista1 = pLista[l1];
	lista2 = pLista[l2];

	mergeLista(&pLista[nLista], &lista1);
	mergeLista(&pLista[nLista], &lista2);
	//pLista[ntLista] = novaLista;
	
	celula *w;
     printf("novaLista\n");
     for (w = pLista[nLista]; w != NULL; w = w->proximo) {
  	 	printf("novaLista Valor : %d\n", w->informacao);
     }
	

}

