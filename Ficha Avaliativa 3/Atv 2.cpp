#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct noLista{ /* estrutura duplamente auto-referenciada */
       int valor;
       struct noLista *anterior, *proximo;

};

typedef struct noLista NOLISTA; /* definição do tipo NOLISTA a partir do tipo 'struct noLista' */
typedef NOLISTA *NOLISTAPTR; /* definição do tipo *NOLISTAPTR a partir do tipo NOLISTA */

/* insere um nó no início da lista */
void insere_no_inicio(NOLISTAPTR *inicio, int valor){

     NOLISTAPTR novo;

     novo = (NOLISTAPTR) malloc(sizeof(NOLISTA)); /* aloca memória para o novo nó */

     if(novo == NULL) /* se não houver memória disponível */
         return;      /* sai da função */

     if(*inicio == NULL){    /* se a lista estava vazia */
         novo->valor = valor; /* insere o valor no novo nó */
         novo->proximo = novo->anterior = NULL; /* não há próximo nó nem nó anterior, pois só há um nó */
         *inicio = novo; /* o novo nó é o primeiro da lista */

     }
     else{   /* se já havia nó na lista */
         novo->valor = valor; /* insere o valor no novo nó */
         novo->anterior = NULL; /* não há nó anterior */
         novo->proximo = *inicio; /* o novo nó aponta para o que está no início */
         (*inicio)->anterior = novo; /* o nó atual do início aponta para o novo nó */
         *inicio = novo; /* o novo nó passa a ser o primeiro da lista */
     }
}

/* insere um valor no final da lista */
void insere_no_final(NOLISTAPTR *inicio, int valor){

     NOLISTAPTR novo, atual;

     novo = malloc(sizeof(NOLISTA));

     if(novo == NULL)
         return;

     if(*inicio == NULL){
         novo->valor = valor;
         novo->proximo = novo->anterior = NULL;
         *inicio = novo;
     }
     else{
         atual = *inicio; /* atual aponta para o início */
         while(atual->proximo != NULL) /* enquanto o nó atual não for o último */
             atual = atual->proximo;    /* vai para o nó seguinte */

         novo->valor = valor;
         novo->anterior = atual;  /*o nó anterior ao novo é o nó atual */
         novo->proximo = NULL; /* não há próximo nó, pois o novo será o último */
         atual->proximo = novo; /* o nó atual aponta para o novo nó e não é mais o último */
     }
}

/* remove um nó escolhido pelo usuário */
int retira(NOLISTAPTR *inicio, int valor){

    NOLISTAPTR temporario, atual;

    if(*inicio == NULL)
        return 0; /* retorna 0 caso a lista esteja vazia */

    atual = *inicio; /* o nó atual é o do início */

    if((*inicio)->valor == valor) /* caso o no a ser retirado seja o do inicio */
        *inicio = (*inicio)->proximo; /* o nó inicial passa a ser o próximo da lista */

    while(atual != NULL && atual->valor != valor) /*se há nó e o valor do mesmo não é o valor que se quer retirar*/
        atual = atual->proximo; /*passa para o próximo*/

    if(atual == NULL)
        return 0; /* retorna 0 se não encontrou o valor */
    /* caso tenha encontrado */
    else{
        temporario = atual; /* temporario aponta para o nó encontrado */

        if(atual->anterior != NULL)/* caso haja um nó anterior ao enontrado*/
            atual->anterior->proximo = atual->proximo; /* faz o nó anterior apontar para o nó posterior ao encontrado */

        if(atual->proximo != NULL) /* caso haja um nó posterior ao enontrado*/
            atual->proximo->anterior = atual->anterior; /* faz o nó posterior apontar para o nó anterior ao encontrado */

        free(temporario);/* remove o nó encontrado */
    }

    return 1;
}

/* deleta um nó apartir do início da lista */
int elimina_no(NOLISTAPTR *inicio){

    NOLISTAPTR temporario;
    int c;

    temporario = *inicio; /* nó do início passa a ser temporário */
    c = (*inicio)->valor; /* pega o valor que estava no nó */
    *inicio = (*inicio)->proximo; /* o nó seguinte passa a ser o do início */
    free(temporario); /* deleta o nó temporário */

    return c;
}

int esta_vazia(NOLISTAPTR lista){

    return lista == NULL;

}
int tamanho_lista(NOLISTAPTR lista) {
         int cont=1;

	     if(esta_vazia(lista))
	         return cont;
	     else{
	         while(lista != NULL){
	             lista = lista->proximo;
	             cont++;
	         }
	         return cont;
	     }
}
void imprime_lista_ordem_crescente(NOLISTAPTR lista,int tam){

         int vetor[tam];
         int i=0;
         int aux;
	     if(esta_vazia(lista))
	         printf("\n\nA lista esta vazia.\n\n");
	     else{
printf("\nA lista em ordem normal e e h:\n\n");
	         while(lista != NULL){
                vetor[i] = lista->valor;
                printf(" %d", lista->valor);
	            lista = lista->proximo;
	            i++;
	         }
          int i, j, min, swap;
          for (i = 0; i < (tam-1); i++){
            min = i;
            for (j = (i+1); j < tam; j++) {
                if(vetor[j] < vetor[min]) {
                    min = j;
                }
            }
            if (i != min) {
                swap = vetor[i];
                vetor[i] = vetor[min];
                vetor[min] = swap;
            }
          }
          printf("\nA lista em ordem crescente e h:\n\n");
          for (i = 0; i < (tam-1); i++) {
            printf(" %d", vetor[i]);
          }
      }

	}




void menu(){

     printf("     <------> OPERACOES BASICAS EM UMA LISTA DUPLAMENTE ENCADEADA <------>\n\n");
     printf("\n\n\t\t\t\t  OPCOES\n\n");
     printf("\t\t1 - Inserir um elemento no inicio da lista\n");
     printf("\t\t2 - Inserir um elemento no final da lista\n");
     printf("\t\t3 - Remover um elemento da lista\n");
     printf("\t\t4 - Imprimir em ordem crescente\n");
     printf("\t\t5 - sair\n\n");

}

int main(){

    NOLISTAPTR lista = NULL;
    int opcao;
    int valor;
    int tamanho;

    menu();
    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);

    while(opcao != 5){

        switch(opcao){

            case 1:
                 printf("\nDigite o valor: ");
                 scanf("\n%d", &valor);
                 insere_no_inicio(&lista, valor);
                 system("cls");
                 break;

            case 2:
                 printf("\nDigite o valor : ");
                 scanf("\n%d", &valor);
                 insere_no_final(&lista, valor);
                 system("cls");
                 break;

            case 3:
                 printf("\nDigite o valor a ser retirado: ");
                 scanf("\n%d", &valor);
                 if(! retira(&lista, valor)){
                     printf("\nNo inexistente!\n\n");
                     getch();
                 }
                 system("cls");
                 break;
            case 4:
                 tamanho=tamanho_lista(lista);
                 imprime_lista_ordem_decrescente(lista,tamanho);
                 getch();
                 system("cls");
                 break;
            default:
                 printf("\nOpcao invalida!!!\n\n");
                 getch();
                 system("cls");
                 break;
        }
        menu();
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);
    }
    printf("\nLimpando lista ...\n\n");
    while(! esta_vazia(lista)){ /* retira todos os nós não apagados para liberar a memória */
        printf("No %c retirado\n", elimina_no(&lista));
    }
    printf("\nLista vazia\n");

    getch();

    return 0;
}

