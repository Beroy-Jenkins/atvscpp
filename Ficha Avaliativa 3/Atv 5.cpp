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

int main(){
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	// Declarações
	int nLista = 0;
	celula *pLista[nLista];
	int continuar = 0;

	// Funções
	void initLista(celula **pRecebido);
	void insertLista(celula **pRecebido);
	void buscaListaSimples(celula **pRecebido);
	void removeElementoListaSimples(celula **pRecebido);
	void calculaMedia(celula **pRecebido);
	
	
	// Instruções
	pLista[nLista] = (celula *)malloc(sizeof(struct celulaLista));
	initLista(&pLista[nLista]);
	do{
		printf("\n Numero da Lista atua: %d\n\n"nListas++);
		printf("0 - Sair\n");
		printf("1 - Inserir  \n");
		printf("2 - Consultar \n");
		printf("3 - Remover\n");
		printf("4 - Calcula Media\n");
		printf("5 - Adcionar lista\n");
		printf("6 - Ir para lista anterior\n");
		printf("7 - Ir para proxima lista\n");
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
				nListas++;
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
				//PAROU AQUI
			if(pLista[nLista]){
				printf("Esta e a primeira lista.");
				}else{
					nLista--;
				}
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
   (*pRecebido)->proximo = NULL;
}

/*
   Função para Inserção no Início
*/
void insertLista(celula **pRecebido){
	// Declarações
	celula *temporario;
	int valor;
	// Instruções
	printf("\nInforme um Valor a ser Inserido : ");
	scanf("%d", &valor);
	temporario = (celula *)malloc(sizeof(celula));
	temporario->informacao = valor;
	temporario->proximo = (*pRecebido)->proximo;
	(*pRecebido)->proximo = temporario;
	system("cls");
	printf("Valor Inserido: %d", valor);
}
/*
   Função para Percorrer Elementos
*/
void buscaListaSimples(celula **pRecebido){
   // Declarações
      celula *temporario;
   // Instruções
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
   Opção para Validação da Entrada
*/

