#include <stdio.h>
#include <conio.h> 
void Swap (int a,int b){
	int temp;
	temp=a;
	a=b;  
	b=temp;  
	printf ("\n ==> Os valores dentro da funcao Swap sao : \n\n a = %d \n\n b = %d \n\n",a,b);
}
int main (void){
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	int num1,num2;   
	num1=100;   
	num2=200;   
	printf ("\n Antes de chamar a funcao : \n\n num1 = %d \n\n num2 = %d \n\n",num1,num2);   
	Swap(num1,num2);   
	printf ("\n Depois de chamar a funcao : \n\n num1 = %d \n\n num2 = %d \n\n",num1,num2);   
	getch();
}
