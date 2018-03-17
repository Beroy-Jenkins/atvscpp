#include <stdio.h>
#include <conio.h> 
int main() { 
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	int i=3,j=5;
	int *p, *q;
	printf("resultado de: p = &i =   	\t '6afd6c' \n");
	printf("resultado de: *q = &j =  	\t '[Error] invalid conversion from 'int*' to 'int' [-fpermissive] '\n");
	printf("resultado de: p = &*&i = 	\t '7011692' \n");
	printf("resultado de: i = (*&)j =	\t '[Error] expected primary-expression before ')' token '\n");
	printf("resultado de: i = *&j  =	\t '5'\n");
	printf("resultado de: i = *&*&j =	\t '5'\n");
	printf("resultado de: q = *p =		\t '[Error] invalid conversion from 'int' to 'int*' [-fpermissive] ' \n");
	printf("invalidos = 'B' 'D' 'G'");
	getch();
} 
