#include <stdio.h>
#include <conio.h>




int main () {
	int numeroa;
	int numerob;
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	printf("Informe um numero: \n");
	scanf("%d",&numeroa);
	printf("Informe outro numero: \n");
	scanf("%d",&numerob);
	if(numeroa > numerob){
		printf ("o numero: %d  e maior que o numero :  %d \n",numeroa,numerob);	
	}else if(numeroa < numerob){
		printf ("o numero: %d  e maior que o numero :  %d \n",numerob,numeroa);	
	}else{
		printf ("os numeros tem o mesmo valor");	
	}
	
    getch();
} 	
