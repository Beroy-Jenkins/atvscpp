/* Atividade de revisao  */
/*-----------------------Integrantes----------------*/
//Eduardo Dionisio Gamarra 201622330
//Douglas Antero Rodrigues Silva 201621906
//Sabrina Rodrigues Alves 201621587
//Marcia Sayuri Mizuguchi Martins 201621586
//1 - Calcular a soma de dois números inteiros informados.
//2 - Imprima um número real informado pelo usuário.
//3 - Requisite um valor real e imprima a sua metade.
//4 - Imprima a média aritmética de quatro notas informadas pelo usuário.
//5 - Requisite um valor do usuário e imprima o seu antecessor e sucessor.
//6 - Requisite do usuário os dados para impressão da área de um quadrado.
//7 - Requisite quatro notas de um aluno e imprima se o mesmo foi aprovado ou não. São aprovados apenas quando a média for maior igual ou maior a 7.
/*-------------Bibliotecas---------------*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

/*------------------Metodos------*/
void somaDoisNumeros() {
	int num1, num2, total;
    
    printf("\n1. Calcular a soma de dois números inteiros informados.\n");
    
    printf("Informe um numero: \n");
    scanf("%d",&num1);
    
    printf("Informe um numero: \n");
    scanf("%d",&num2);
    
    total = num1+num2;
    printf ("\nSoma dos dois numeros: \n %d",total);
	

}
   

void imprimaNumeroReal(){
	
	int numero;
	
	printf("\n2. Imprima um número real informado pelo usuário.\n");
    
	printf("Digite o valor: ");
    scanf("%d",&numero);
    printf("Valor Informado: %d", numero);

}

void imprimaMetade(){
	
	int numero;
	float resultado;
	
	printf("\n3. Requisite um valor real e imprima a sua metade.\n");
	
    printf("Digite o Valor: ");
    scanf("%d",&numero);
    resultado = numero/2.0; // int/int=int | int/float=float | float/int=int | float/float=float
    printf("Sua Metade: %g",resultado);
       
}

void imprimaMedia(){
	
	int numero1, numero2, numero3, numero4;
	float media;
	
	printf("\n4. Imprima a média aritmética de quatro notas informadas pelo usuário.\n");
	
    printf("Digite a Primeira Nota: ");
    scanf("%d",&numero1);
    
    printf("Digite a Segunda Nota: ");
    scanf("%d",&numero2);
    
    printf("Digite a Terceira Nota: ");
    scanf("%d",&numero3);
    
	printf("Digite a Quarta Nota: ");
    scanf("%d",&numero4);
 
    media=(numero1+numero2+numero3+numero4)/4.00;
	printf ("Media aritmetica %g\n", media); //2 casa
	//printf ("Media aritmetica %f\n", media); //6 casas
	//printf ("Media aritmetica %e\n", media); //varias casas
}
    


void antecessoESucessor(){
	
	int numero, antecessor, sucessor;
	
	printf("\n5. Requisite um valor do usuário e imprima o seu antecessor e sucessor.\n");
	
    printf("Digite o numero: ");
    scanf("%d",&numero);

    antecessor=numero-1;
    sucessor=numero+1;
   
    printf("Antecessor: %d \nSucessor: %d", antecessor,sucessor);
     
}

void areaDoQuadrado(){
		
	int altura, largura, result;
	
	printf("\n6. Requisite do usuário os dados para impressão da área de um quadrado.\n");
	
    printf("Digite a altura: ");
    scanf("%d",&altura);
    
    printf("Digite a largura: ");
    scanf("%d",&largura);
    
    result=altura*largura;
	printf("Area do quadrado: %d",result);

}

void aprovado(){
 
 	int nota1, nota2, nota3, nota4;
	float media, divisor=4;

	printf("\n7. Requisite quatro notas de um aluno e imprima se o mesmo foi aprovado ou não. Requisito média maior igual a 7.\n");

    printf("Digite a primeira nota: ");
    scanf("%d",&nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%d",&nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%d",&nota3);
    
    printf("Digite a quarta nota: ");
    scanf("%d",&nota4);    
   
	//media = (nota1+nota2+nota3+nota4)/4.0;  
	media = (nota1+nota2+nota3+nota4)/divisor;  
    printf("\nMedia final: %g\n",media);

    if (media >= 7){
        printf("\nAluno Aprovado \n");
    } else {
        printf("\nAluno Reprovado");
    }      
}

void sair(){
    printf("Professor, ganhei uma pizza!\n");
}

void montarMenu(){
	
    system("cls || clear");
    printf("\nAtividade\n");
    printf("1. Calcular a soma de dois números inteiros informados.\n");
    printf("2. Imprima um número real informado pelo usuário.\n");
    printf("3. Requisite um valor real e imprima a sua metade.\n");
    printf("4. Imprima a média aritmética de quatro notas informadas pelo usuário.\n");
    printf("5. Requisite um valor do usuário e imprima o seu antecessor e sucessor.\n");
    printf("6. Requisite do usuário os dados para impressão da área de um quadrado.\n");
	printf("7. Requisite quatro notas de um aluno e imprima se o mesmo foi aprovado ou não. Requisito média maior igual a 7.\n");
    printf("0. Sair\n");

}


/*-------------funçao principal-----------*/
int main()
{
    int continuar=1;
    setlocale(LC_ALL, "Portuguese");

    do
    {
        montarMenu();   
  
        scanf("%d", &continuar);
        switch(continuar)
        {
            case 1:
                somaDoisNumeros();
                break;

            case 2:
                imprimaNumeroReal();
                break;

            case 3:
                imprimaMetade();
                break;
                
            case 4:
                imprimaMedia();
                break;
                
            case 5:
                antecessoESucessor();
                break;
                
            case 6:
                areaDoQuadrado();
                break;
                
            case 7:
                aprovado();
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
