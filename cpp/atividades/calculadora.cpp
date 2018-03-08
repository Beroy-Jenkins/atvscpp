#include <stdio.h>
#include <conio.h>


int main()
{
        float v1, v2;
        char op;

        do
        {
                //system("clear");

                printf("Escolha a operacao desejada\n");
                printf("\t1 - Adicao\n");
                printf("\t2 - Subtracao\n");
                printf("\t3 - Multiplicacao\n");
                printf("\t4 - Divisao\n");
                printf("\n\t5 -  Sair\n");

                printf("Opcao: ");
                scanf("%c", &op);

        }while( op );

        if(op == 5)
        {
                printf("\n tchau!!! :)\n");
                return 0;
        }

        printf("\nEntre com valor 1: ");
        scanf(" %f", &v1);

        printf("Entre com valor 2: ");
        scanf(" %f", &v2);
         switch(op)
        {
                case 1:
                        printf("\n\tOperacao  de adicao\n");
                        printf("\t%.2f + %.2f = %.2f\n", v1, v2, v1 + v2 );
                break;

                case 2:
                        printf("\n\tOperacao  de subtracao\n");
                        printf("\t%.2f - %.2f = %.2f\n", v1, v2, v1 - v2 );
                break;

                case 3:
                        printf("\n\tOperacao  de multiplicacao\n");
                        printf("\t%.2f * %.2f = %.2f\n", v1, v2, v1 * v2 );
                break;

                case 4:
                        if(v2 == 0)
                                printf("Divide by zero\n");
                        else
                                printf("\n\tOperacao  de adicao\n");
                                printf("%.2f / %.2f = %.2f\n", v1, v2, v1 / v2 );
                break;

                default:
                        printf("Operador invalido: \n");
        }
}
