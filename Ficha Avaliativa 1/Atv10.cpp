#include <stdio.h>
#include <conio.h>



int main () {	
	int numero = 0;
	int tamanhoarray = 0;
	
	int numerodigitado;
	
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	printf("Informe um numero: \n");

	scanf("%d",&numerodigitado);

	numero = numerodigitado;
	
    while (numero != 0) {	
    	numero /= 10;
		tamanhoarray++;

	}


	int numberArray[tamanhoarray];
	tamanhoarray = 0;
	numero = numerodigitado;
	
	tamanhoarray = 0; 
    while (numero != 0) {	
		numberArray[tamanhoarray] = numero % 10;
	    numero /= 10;
	    tamanhoarray++;

	};
	
	for(int numeros = tamanhoarray ;numeros>=0;numeros--){
		printf("%d \n",numberArray[numeros-1]);
	}

	getch();
	
	
	
}
