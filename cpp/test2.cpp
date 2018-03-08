/*-------------Bibliotecas---------------*/
#include <stdio.h>
#include <conio.h>

/*-------------funçao principal-----------*/

int main()
{
    int num1, num2, resultado;
    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("%d + %d = %d", num1,num2,resultado);
}

