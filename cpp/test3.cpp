#include <stdio.h>

struct Contatos {
  char nome[45];
  char email[60];
  char tel[20];
  char cel[20];

};

struct Contatos contato;

int main() {
  printf("Digite o nome: ");
  scanf("%[^\n]s", &contato.nome);
  printf("Digite o e-mail: ");  
  scanf("%[^\n]s", &contato.email);
  printf("Digite o numero do telefone: ");
  scanf("%[^\n]s", &contato.tel);
  printf("Digite o numero do celular: ");
  scanf("%[^\n]s", &contato.cel);

  return(0);

}

