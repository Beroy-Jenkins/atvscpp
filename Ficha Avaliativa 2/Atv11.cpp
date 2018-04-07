#include <stdio.h>
#include <conio.h>

	struct teste{
	int i, j;
	int *p, *q;
	
	};
int main() {

	struct teste infoTeste;
	infoTeste.i = 21;
	infoTeste.j = 9;
	
	struct teste *ponteiroTeste;
	infoTeste.p = &infoTeste.i;
	infoTeste.q = &infoTeste.j;
	ponteiroTeste = &infoTeste;

	//a) infoTeste.i, &infoTeste.i;
	printf("\nSaida: 21, 6afd60");
	//b) infoTeste.j, &infoTeste.j; 
	printf("\nSaida: 9, 6afd64");
	//c) infoTeste.p, &infoTeste.p, *infoTeste.p;
	printf("\nSaida: 6afd60, 6afd68, 21");
	//d) infoTeste.q, &infoTeste.q, *infoTeste.q; 
	printf("\nSaida: 6afd64, 6afd70, 9");
	//e) ponteiroTeste, &ponteiroTeste;
	printf("\nSaida: 6afd60,6afd58");
	//f) ponteiroTeste->i, ponteiroTeste->j, ponteiroTeste->p, ponteiroTeste->q,  
	printf("\nSaida: 21, 9 , 6afd60, 6afd64");
	//g) *ponteiroTeste->p, *ponteiroTeste->q
	printf("\nSaida: 21, 9");
	
	getch();
}

