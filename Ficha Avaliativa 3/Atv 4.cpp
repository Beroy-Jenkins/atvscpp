#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int informacao;
    struct nodo *anterior, *proximo;
}lista;
lista *primeiro, *atual, *anterior, *proximo, *gravar;

void insere(char tipo){

    if(primeiro == NULL){
        primeiro = malloc(sizeof(lista));
        primeiro->proximo = gravar;
        primeiro->anterior = gravar;
        gravar->anterior = primeiro;
        gravar->proximo = primeiro;
    } else{
        if(tipo == 'M'){
            atual = primeiro->proximo;
            while(gravar->informacao>atual->informacao){
                if(atual != primeiro)
                    atual = atual->proximo;
                else
                    break;
            }
            anterior = atual->anterior;
            proximo = atual; /* o endere�o de atual vai para proximo */
            anterior->proximo = gravar; /* Os dados contidos em "gravar" ser�o inseridos entre */
            gravar->anterior = anterior; /* as os nodos referencia "anterior" e "proximo" */
            gravar->proximo = proximo;
            proximo->anterior = gravar;
        }
        if(tipo == 'F'){
            anterior = primeiro->anterior;
            proximo = primeiro;
            anterior->proximo = gravar; /* Os dados contidos em "gravar" ser�o inseridos entre */
            gravar->anterior = anterior; /* as os nodos referencia "anterior" e "proximo" */
            gravar->proximo = proximo;
            proximo->anterior = gravar;
        }
    }
}

void NovoReg(void){

    system("cls");

    gravar = malloc(sizeof(lista));

    printf("Digite o valor: ");
    int valor;
    scanf("\n%d", &valor);
    gravar->informacao = valor;
    //gets(gravar->informacao);
    insere('M'); /* chamada do procedimento de inser��o */
    /* 'M' corresponde a inser��o no meio ( acarretando em encadeamento ordenado) e */
    /* 'F' corresponde a inser��o no fim */
    printf("\nSeu registro foi incluido!\n\n");
    system("pause");
}

void listar(void){

    char op;

    if(primeiro == NULL){

        system("cls");

        printf("Nenhum registro armazenado...\n\n");

        system("pause");

        return;

    } else{
        atual = primeiro->proximo;
        do{
            system("cls");
            printf("Pressione + e - para alternar entre os registros ESC para sair.\n\n");
            printf("valor: %d\n\n",atual->informacao);
            op = getch();
            switch (op){
            case 43:{
                if (atual->proximo == primeiro)
                    atual = primeiro->proximo;
                else
                    atual = atual->proximo;
                    break;
            }case 45:{
                if(atual->anterior == primeiro)
                    atual = primeiro->anterior;
                else
                    atual = atual->anterior;
            }

        }
    }while(op != 27);

    }
}

void excluir(void){

    char op;
    if(primeiro == NULL){
        system("cls");
        printf("Nenhum registro armazenado...\n\n");
        system("pause");
        return;
    }else{
        atual = primeiro->proximo;
    do{
        system("cls");
        printf("Pressione + e - para alternar entre os registros, sair e confirmar\n\n");
        printf("Valor: %d\n\n",atual->informacao);
        op = getch();
        switch (op){
        case 43:{
            if (atual->proximo == primeiro)
                atual = primeiro->proximo;
            else
                atual = atual->proximo;
                break;
        }case 45:{
            if(atual->anterior == primeiro)
                atual = primeiro->anterior;
            else
                atual = atual->anterior;
            }

        }
    }while((op != 27) && (op != 13));

}
if(op == 27)
    return;
    printf("\n\nVoce confirma a exclusao deste registro (S/N): [ ]\b\b");
    op = getch();
if (op >= 97)
    op -= 32;
if(op == 'S'){
    anterior = atual->anterior;
    proximo = atual->proximo;
    anterior->proximo = proximo;
    proximo->anterior = anterior;
    free(atual);
if (primeiro == primeiro->proximo) /* se for excluido o penultimo registro, sobrando apenas o registro "primeiro" */
    primeiro = NULL; /* que n�o � util para n�s, o primeiro tambem ser� liberado */
    printf("\n\nRegistro excluido com sucesso!\n\n");
    system("pause");
} else
return;
}

int main(void){

char escolha;

do{

system("cls");

printf("I - Inclui\nC - Consulta\nE - Exclui\n - Sair\n\nEscolha[ ]\b\b");

escolha = getch();

if(escolha >= 97)

escolha -= 32;

if(escolha == 'I')

NovoReg();

if(escolha == 'C')

listar();

if(escolha == 'E')

excluir();

}while(escolha != 27);

return 0;
}
