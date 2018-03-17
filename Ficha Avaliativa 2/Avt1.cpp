#include <stdio.h>
#include <conio.h> 
int main() { 
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	int i=3,j=5;
	int *p, *q;
	p = &i;
	q = &j;
	printf("Valor de i, &i: %d\t%x \n", i, &i);
	printf("Valor de j, &j: %d\t%x \n", j, &j);
	printf("Valor de p, *p, &p: %x\t%d\t%x \n",p,*p,&p);
	printf("Valor de q, *q, &q: %x\t%d\t%x", q,*q,&q);
	getch();
} 
