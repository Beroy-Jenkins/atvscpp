/*-----------------------
Declara��o de bibliotecas
------------------------*/
#include <stdio.h>
#include <conio.h>

/*-------------variaveis globais----------*/
int numero;
int antecessor;
int sucessor;

/*-----------------------
Fun�ao principal
------------------------*/

int main (){
    printf("Digite o numero: ");
    scanf("%d",&numero);
    
        
    // valor a variavel
    antecessor=numero-1;
    sucessor=numero+1;
   
    //Impress�o de dados
    printf("Antecessor: %d \nSucessor: %d", antecessor,sucessor);
     
 getch();
    }
