#include <stdio.h>
#include <conio.h>
#include <array>
#include <iostream>
int main () {
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
    int numero = 1 ;
    int ndn = -1;
 	int numeros[ndn];
 	int numerosq[ndn];
do{
	printf("Informe um numero: \n");
	scanf("%d",&numero);	
	if(numero != 0){
		ndn++;
		numeros[ndn] = {numero};
	}else{
		break;
	}
   /*
    for(int i = 0; i <= ndn; i++){
       numerosq[i] = numeros[i]*numeros[i];
         printf("numero: %d \n", numeros[i]);
         printf("numeroq: %d \n", numerosq[i]);
    }
    *///test
    numerosq[ndn] = numeros[ndn]*numeros[ndn];
}
while(numero != 0);
for(int i = 0; i <= ndn; i++){
      printf("numero: %d \n", numerosq[i]);
    }
    getch();
}
