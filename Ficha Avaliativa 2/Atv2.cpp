#include <stdio.h>
#include <conio.h>

int main() {
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	int i=5, *p;
	p = &i;
	printf("%x \n", p);
	printf("Se o endereço de i for:4094 a saida sera 'FFE' que e o numero haxadecimado de 4094");
	getch();
}


