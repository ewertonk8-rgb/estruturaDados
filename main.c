#include <stdio.h>
#include <string.h>

typedef struct
{
    int idade;
    char nome[50];
} Pessoa;


int main() {
  
    Pessoa p = {20,"EWE"};
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);

    strcpy(p.nome, "mat");

    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    return 0;
}
