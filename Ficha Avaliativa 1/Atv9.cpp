#include <stdio.h>
#include <conio.h>
#define TRUE 1
#define FALSE 0
int encaixa(int numeroa, int numerob) {
  
  while (numerob != 0 && numeroa % 10 == numerob % 10) {
    numeroa = numeroa/10;
    numerob = numerob/10;
  }

  if (numerob == 0)
    return TRUE;
  else
    return FALSE;

}

int main() {
	int numeroa, numerob,  maior, menor, subseq;

	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");

	printf("Informe um numero: \n");
	scanf("%d",&numerob);
	printf("Informe um outro numero: \n");
	scanf("%d",&numeroa);

  
  if (numeroa > numerob) {
    maior = numeroa;
    menor = numerob;
  }
  else {
    maior = numerob;
    menor = numeroa;
  }    

  subseq = FALSE;
  while (maior >= menor) {
    if (encaixa(maior,menor) == TRUE)
      subseq = TRUE;
    maior = maior/10;
  }
  if (subseq == TRUE)
    printf("%d e' segmento de %d\n",numerob,numeroa);
  else
    printf("%d nao e' segmento de %d\n",numerob	,numeroa);

  return 0;
	getch();

}


  
