#include <stdio.h>
#include <conio.h>




int main () {
	int numero;
	int numerosA = 0;
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	printf("Informe um numero: \n");
	scanf("%d",&numero);
	
	for(int i = 0; i <= numero; i++){
		do{
			if(i%2 != 0){
				printf (" numero achado:  %d \n",i);
				numerosA++;
				i++;
			}else{
				i++	;
			}
		}while(numerosA < numero);
		
	}
    getch();
} 	
