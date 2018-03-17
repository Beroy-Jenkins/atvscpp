#include <stdio.h>
#include <conio.h>
#define MAX 100

int main() {
	int m, n,         /* dimensoes da matriz A */
	nb, p,        /* dimensoes da matriz B */
	i, j, k;
	int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	printf("Informe as dimensoes da matriz A: ");
	scanf("%d", &m);
	scanf("%d", &n);
	printf("Digite a matriz A:\n");
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("Informe o numero da coluna:%d linha:%d :\n",i+1,j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("Informe as dimensoes da matriz B: ");
	scanf("%d", &nb);
	scanf("%d", &p);
	if (nb != n){
		printf("Nao existe o produto da matriz A por B!!");
	}else {
		printf("Informe a matriz B:\n");
		
		for (i = 0; i < n; i++){
			for (j = 0; j < p; j++){
				printf("Informe o numero da coluna:%d linha:%d :\n",i+1,j+1);
				scanf("%d", &B[i][j]);
			}
		}
		for (i = 0; i < m; i++){
			for (j = 0; j < p; j++){
				C[i][j] = 0;
				for (k = 0; k < n; k++){
					C[i][j] = C[i][j] + A[i][k] * B[k][j];
				}
			}
		}
		printf("Matriz A X B: \n");
	    for (i = 0; i < m; i++) {
	    	for (j = 0; j < p; j++){
				printf("%d ", C[i][j]);	    		
	    	}
		    printf("\n");
	    }
	}
	getch();
}

