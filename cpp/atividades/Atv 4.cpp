/*-----------------------
Declaração de bibliotecas
------------------------*/
#include <stdio.h>
#include <conio.h>

int numero1;
int numero2;
int numero3;
int numero4;
int total;
int media;

/*-----------------------
Declaração variáveis globais
------------------------*/

int main (){
    printf("Digite a Primeira Nota: ");
    scanf("%d",&numero1);
    
    printf("Digite a Segunda Nota: ");
    scanf("%d",&numero2);
    
    printf("Digite a Terceira Nota: ");
    scanf("%d",&numero3);
    
    printf("Digite a Quarta Nota: ");
    scanf("%d",&numero4);
    
    // valor a variavel
    total=numero1+numero2+numero3+numero4;
   
    //Impressão de dados
    printf("Media aritmetica %d", total/4);
     
 getch();
    }


