#include <stdio.h>
#include <conio.h>

	struct teste{
	int i, j;
	int *p, *q;
	
	};
   //struct teste1;
int main() {

	struct teste infoTeste;
	infoTeste.i = 21;
	infoTeste.j = 9;
	
	struct teste *ponteiroTeste;
	infoTeste.p = &infoTeste.i;
	infoTeste.q = &infoTeste.j;
	//infoTeste.q = &teste.j;
	ponteiroTeste = &infoTeste;

	printf("%d",infoTeste.i);
	getch();
}
/*
a) infoTeste.i, &infoTeste.i;
b) infoTeste.j, &infoTeste.j; 
c) infoTeste.p, &infoTeste.p, *infoTeste.p; 
d) infoTeste.q, &infoTeste.q, *infoTeste.q; 
e) ponteiroTeste, &ponteiroTeste; 
f) ponteiroTeste->i, ponteiroTeste->j, ponteiroTeste->p, ponteiroTeste->q, 
g) *ponteiroTeste->p, *ponteiroTeste->q
*/
