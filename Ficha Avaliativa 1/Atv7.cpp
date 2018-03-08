#include <stdio.h>
#include <conio.h>



int main () {
	int quantn, numeroa, numerob;
	int valor = 0, valora, valorb ;
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	printf("Informe a quantidade de numeros: \n");
	scanf("%d",&quantn);
	printf("Informe um numero: \n");
	scanf("%d",&numeroa);
	printf("Informe outro numero: \n");
	scanf("%d",&numerob);
	
	printf (" numeros achados: ");
	if(quantn > 0){
		printf ("%d \t",valor);	
		quantn--;
		valora = numeroa;
		valorb = numerob;
	}
	while(quantn != 0){ 
	
		if(valora < valorb){
			printf ("%d \t",valora);
			valora += numeroa;
		}else if (valora == valorb){	
			printf ("%d \t",valorb);
			valora += numeroa;
			valorb += numerob;
		}else{	
			printf ("%d \t",valorb);
			valorb += numerob;
		
		}
	
		quantn--;
		
	}
	
    getch();
} 	
