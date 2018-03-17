#include <stdio.h>
#include <conio.h> 

void maximoMinimo (int *v,int N, int *maximo, int *minimo){
	*maximo = v[0];
	*minimo = v[0];
	while(v[N] != 0){
		if(v[N]>*maximo){
			*maximo = v[N];
		}
		if(v[N]<*minimo){
			*minimo = v[N];
		}
		N--;
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
	
	maximoMinimo(v,numeros,&max,&min);
	printf("\nmaximo = %d\t minimo = %d",max,min);
	
	getch();
}
