#include <stdio.h>
#include <conio.h>




int main () {
	int numero;
	int result = 1;
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	printf("Informe um numero: \n");
	scanf("%d",&numero);
	
	for(int i = 1; i <= numero;){
		result = result * i;
		i++;
	}
	printf("Resultado:  %d\n",result);
    getch();
} 	
