/*-----------------------
Declaração de bibliotecas
------------------------*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int nota1;
int nota2;
int nota3;
int nota4;
int total;
char resultado;

/*-----------------------
Funçao principal
------------------------*/

int main (){
    printf("Digite a primeira nota: ");
    scanf("%d",&nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%d",&nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%d",&nota3);
    
    printf("Digite a quarta nota: ");
    scanf("%d",&nota4);    
        
        
    // valor a variavel
    total=nota1+nota2+nota3+nota4;
   
    //Impressão de dados
    printf("Media final do aluno: %d",total/4);
     
     
    if (total >= 7)
    {                 
        printf("\nAprovado");
    }
        else 
         {
        
            
        	printf("\nReprovado");
            
               
        }


getch();
}
