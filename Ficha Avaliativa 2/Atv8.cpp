#include <stdio.h>
#include <conio.h>

int main() {
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	int i = 22;
	int *pt;
	pt = &i; 
//a) ( ) pt armazena o endere�o de i 
	printf("\na) %x",pt);
//b) ( ) *pt � igual a 22
	printf("\nb) %d",*pt);
//c) ( ) ao se executar *pt = 20, i passar� a ter o valor 20 
	*pt = 20;
	printf("\nc) %d",i);
//d) (X) pt � igual a 22 
	printf("\nd) %x",pt);
//e) ( ) ao se alterar o valor de i, *pt ser� modificado
	i = 25;
	
	printf("\nEndereco pt= %x",&pt);
	printf("\ne) %d",*pt);
	printf("\n Alternativa false = d)");
	getch();
}





