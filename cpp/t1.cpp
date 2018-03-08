#include <stdio.h>
#include <conio.h>
#include <locale.h>


/*-------------variaveis globais----------*/
int fator=10;
/*-------------funçao principal-----------*/
 int soma_dois_numeros(int a, int b){
	 
	return (a+b)*fator;
	 
 }

void altera_fator(int novoValor){
	fator = novoValor;
	
}
int main(){	
	int resultado = soma_dois_numeros( 2, 5 );
	printf("\n mostrar resulltado %d", resultado);
	//fator = 20;
	altera_fator(20);
	resultado = soma_dois_numeros( 2, 5 );
	printf("\n mostrar resulltado %d", resultado);
	resultado = soma_dois_numeros( 3, 5 );
	printf("\n mostrar resulltado %d", resultado);
	getch();
	return 0;
}



