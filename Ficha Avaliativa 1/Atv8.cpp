#include <stdio.h>
#include <conio.h>




int main () {
	int numero;
	int ns = 0;
	int result[ns];
	
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	printf("Informe um numero: \n");
	scanf("%d",&numero);
	do{
		result[ns] = numero%2;
		ns++;
		numero = numero/2;
	}while(numero != 0 && numero != 1);
	ns--;
	printf(":%d",numero);
	for(int i=ns;i>=0;i--){
		printf("%d",result[i]);
	}
	

    
	getch();
} 	
