//Eduardo Dionisio Gamarra 201622330 gamarra.eduardo@gmail.com
//Foi um inferno mais aprendi =)
/*-------------Bibliotecas---------------*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
/*-------------variaveis globais----------*/

/*-------------funçao principal-----------*/

int main()
{	
setlocale(LC_ALL, "Portuguese");

char nome[50];
char endereco[50];
char CEP[50];
char telefone[50];

	printf("XXXXXXXXXX\nX\nX\nX\nXXXXXXXXXX\n");
	printf("\n Digite o seu nome, endereço, CEP e telefone:\n");


	scanf("%[^\n]s", &nome);
	getchar();
	
	scanf("%[^\n]s", &endereco);	
	getchar();
	
	scanf("%[^\n]s",&CEP);
	getchar();
	
	scanf("%[^\n]s",&telefone);
	getchar();
	
	printf("\nVocê digitou seu nome como : %s \n", nome);
	printf("Você digitou seu endereço como : %s \n",endereco);
	printf("Seu CEP é: %s Seu telefone é: %s \n", CEP, telefone);
	getch();
    return 0;
}
