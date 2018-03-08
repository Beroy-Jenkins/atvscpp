#include <stdio.h>
#include <conio.h>
#include <math.h>



int main () {
	int numerox;
	int numeron;
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	printf("Informe um numero: \n");
	scanf("%d",&numerox);
	printf("Informe um expoente: \n");
	scanf("%d",&numeron);
	
	numerox = pow(numerox,numeron);
	printf (" numero calculado:  %d \n",numerox);
	
    getch();
} 	
