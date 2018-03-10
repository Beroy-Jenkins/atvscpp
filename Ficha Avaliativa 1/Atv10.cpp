#include <stdio.h>
#include <conio.h>



int main () {	
	int numero = 0;
	int tamanhoarray = -1;
	int numerodigitado;
	int numberArray[tamanhoarray];
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");

	printf("Informe um numero: \n");
	scanf("%d",&numerodigitado);
    while (numerodigitado != 0) {	
    	numero = numerodigitado %10;
		numerodigitado /= 10;
		tamanhoarray++;
		numberArray[tamanhoarray] = numero;
	}
	
	for(int i = 0;i <=tamanhoarray;i++){
		printf("%d \t",numberArray[i]);
	}
	getch();
	
}
