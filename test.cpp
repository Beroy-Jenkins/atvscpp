#include <stdio.h>
#include <conio.h> 
void troca (int *i, int *j) {
int temp;
temp = *i;
*i = *j;
*j = temp;
printf("Valor de p: %d.\n", temp);
}
int main() {
	int x,y = 200, *p;
	x = 100;
	p = &x;
	printf("Valor de p: %d.\n", *p);
	
	printf("a) falta os includes,foi usado (“,”) no printf, main nao pode ser void tem q ser int, o int* p nao pode recerber um int e seim seu endereco \n b) a variavel temporaria temp criada na funcao troca n pode ser um ponteiro do tipo *int tem que ser um int\nc) a variavel b esta criando uma char com(”)" );
	troca(&x,&y);
	printf("Valor de x e y: %d , %d.\n",x, y );

	char *a,*b;
	a="abacaxi";
	b="uva";
	if(a<b){
	printf("%s vem antes de %s no dicionário",a,b);
	} 
	else{
	printf("%s vem depois de %s no dicionário", a,b);
	}
	getch();
	
}

