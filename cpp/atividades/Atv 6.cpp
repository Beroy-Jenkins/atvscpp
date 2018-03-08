/*-----------------------
Declaração de bibliotecas
------------------------*/
#include <stdio.h>
#include <conio.h>

int altura;
int largura;
int result;



/*-----------------------
Funçao principal
------------------------*/

int main (){
    printf("Digite a altura: ");
    scanf("%d",&altura);
    
    printf("Digite a largura: ");
    scanf("%d",&largura);
        
    // valor a variavel
    result=altura*largura;
   
    //Impressão de dados
    printf("Area do quadrado: %d",result);
     
 getch();
    }


