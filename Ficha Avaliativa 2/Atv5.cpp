#include <stdio.h>
#include <conio.h> 
void troca (int *i, int *j) {
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}
int main() {
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	int x,y = 200, *p;
	x = 100;
	p = &x;
	printf("Valor de p: %d.\n", *p);
	
	char *a,*b;
	a="abacaxi";
	b="uva";
	if(a<b){
	printf("%s vem antes de %s no dicionário",a,b);
	} 
	else{
	printf("%s vem depois de %s no dicionário", a,b);
	}
	
	printf("\na) falta os includes,foi usado (“,”) no printf, main nao pode ser void tem q ser int, o int* p nao pode recerber um int e sem seu endereco \nb) a variavel temporaria temp criada na funcao troca n pode ser um ponteiro do tipo *int tem que ser um int\nc) a variavel b esta criando uma char com(”)" );
	getch();
}

