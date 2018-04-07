#include<stdio.h>
#include<string.h>
#include <conio.h>
struct disciplina{
	char nome[30];
	int cargaHoraria;
};
struct aluno{
	int matricula;
	char nome[30];
}; 
struct notas{
	int A1, A2;
	float Media;
};
struct matricula{ 
	struct aluno *pAluno; // Armazena o ponteiro para um aluno
	struct disciplina *pDisciplina; // Armazena o ponteiro para uma disciplina
	struct notas *pNotas; // Armazena o ponteiro para as notas 
};
main ( ) 
{
	struct disciplina infoDisciplina;
	struct aluno infoAluno;
	struct matricula infoMatricula;
	struct notas infoNotas;
	printf("Digite o nome da disciplina \n");
	gets(infoDisciplina.nome);
	fflush(stdin);
	printf("Digite a carga horaria da disciplina \n");
	scanf("%d",&infoDisciplina.cargaHoraria);
	fflush(stdin);
	printf("Digite o nome do aluno \n");
	gets(infoAluno.nome);
	fflush(stdin);
	printf("Digite a matricula do aluno \n");
	scanf("%d",&infoAluno.matricula);
	fflush(stdin);
	infoMatricula.pAluno = &infoAluno;
	infoMatricula.pDisciplina = &infoDisciplina;
	infoMatricula.pNotas = &infoNotas;
	printf("Digite a nota de A1 \n");
	scanf("%d",&infoMatricula.pNotas->A1); 
	fflush(stdin);
	printf("Digite a nota de A2 \n");
	scanf("%d",&infoNotas.A2);
	fflush(stdin);
	printf("A1 %d \n",infoNotas.A1);
	printf("A2 %d \n",infoMatricula.pNotas->A2);
	infoNotas.Media = (infoNotas.A1 + infoNotas.A2) / 2;
	printf("A media do aluno %s e: %f \n",infoMatricula.pAluno->nome, infoMatricula.pNotas->Media);
	printf("\nSaida: infoMatricula.pAluno->nome, infoMatricula.pNotas->Media");
	
	getch();
}

