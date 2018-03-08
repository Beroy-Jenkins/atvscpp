#include <stdio.h>
#include <conio.h>




int main () {
	int numero;
	int numeros = 0;
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	printf("Informe um numero: \n");
	scanf("%d",&numero);
	for(int i = 0; i <= numero; i++){
		numeros += i;
	}
	printf ("\n Soma dos numeros: \n %d",numeros);
    getch();
} 	
