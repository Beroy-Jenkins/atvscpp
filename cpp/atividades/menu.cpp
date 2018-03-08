#include<stdio.h>
#include <conio.h>
#include<stdio.h>
#include<stdlib.h> //biblioteca que chama o system("cls");

void oi()
{
    printf("Oi!\n");
}

void tudo_bem()
{
    printf("Tudo otimo, e com voce?\n");
}

void familia()
{
    printf("Meus bits...digo, minha familia vai bem!\n");
}

void sair()
{
    printf("Ja vai??? Nao! Nao! Espere! Naa...\n");
}


int main()
{
    int continuar=1;

    do
    {
        system("cls || clear");
        printf("\n\tChat Foreve Alone\n\n");
        printf("1. Oi\n");
        printf("2. Tudo bem\n");
        printf("3. Como vai a familia\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        switch(continuar)
        {
            case 1:
                oi();
                break;

            case 2:
                tudo_bem();
                break;

            case 3:
                familia();
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
        getch();
    } while(continuar);
}

