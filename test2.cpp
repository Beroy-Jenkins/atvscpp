#include <stdio.h>
#include <conio.h>




int main () {
	int num1;
	int num2;
	int conti =1;
	do{
		
		printf ("digite um numero\n");
		scanf("%d",&num1);
		scanf("%f",&num2);
		num2 = num2 % 2;
		num1 = num1 % 2;
		
		if(num1 != 0){
			 printf ("\n impa \n %d",num1);
		}else{
			printf ("\n par \n %d",num1);
		}
		
		if(num2 != 0){
			 printf ("\n impa \n %f",num2);
		}else{
	
			printf ("\n par \n %f",num2);
		}
		printf ("quer continuar? (1 Y | 0 N)\n");
		scanf("%d",&conti);
	}
	while(conti != 0);

   getch();
}
