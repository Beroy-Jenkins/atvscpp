/*-----------------------
Declara��o de bibliotecas
------------------------*/
#include <stdio.h>
#include <conio.h>

int altura;
int largura;
int result;



/*-----------------------
Fun�ao principal
------------------------*/

int main (){
    printf("Digite a altura: ");
    scanf("%d",&altura);
    
    printf("Digite a largura: ");
    scanf("%d",&largura);
        
    // valor a variavel
    result=altura*largura;
   
    //Impress�o de dados
    printf("Area do quadrado: %d",result);
     
 getch();
    }


