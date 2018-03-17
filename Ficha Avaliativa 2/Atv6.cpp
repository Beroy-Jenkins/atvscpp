#include <stdio.h>
#include <conio.h> 

int mm (int v[], int *n1, int *n2){
	int numeros = 0;
	while(v[numeros] != 0){
		printf("%d",v[numeros]);
		numeros++;
	}
	

}
int main(){
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
    int numero = 1,min,max ;
    int numeros = -1; 
	int v[numeros];
	do{
		printf("Informe um numero: (informe 0 se quiser parar de informar numeros)  \n");
		scanf("%d",&numero);	
		if(numero != 0){
			numeros++;
			v[numeros] = {numero};
		}else{
			break;
		}
	}
	while(numero != 0);
	
	mm(v,&min,&max);
	printf("%d,%d",min,max);
	
	getch();
}
