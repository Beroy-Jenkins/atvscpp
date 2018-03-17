#include <stdio.h>
#include <conio.h> 
int main() {
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	int valor;
	int *p1;
	float temp;
	float *p2;
	char aux;
	char *nome = "Algoritmos";
	char *p3;
	int idade;
	int vetor[3];
	int *p4;
	int *p5;
	/* (a) */
	valor = 10;
	p1 = &valor;
	*p1 = 20;
	printf("(a) %d \n", valor);
	/* (b) */
	temp = 26.5;
	p2 = &temp;
	*p2 = 29.0;
	printf("(b) %.1f \n", temp);
	/* (c) */
	p3 = &nome[0];
	aux = *p3;
	printf("(c) %c \n", aux);
	/* (d) */
	p3 = &nome[4];
	aux = *p3;
	printf("(d) %c \n", aux);
	/* (e) */
	p3 = nome;
	printf("(e) %c \n", *p3);
	printf("saidas:\n (a) 20\n(b) 29.0\n(c) A\n(d) r\n(e) A");
	getch();
}
	
