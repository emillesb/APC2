#include <stdio.h>

struct Pessoa {
    char nome[100];
    int idade;
    char genero; // M, F
};

int main() {
    struct Pessoa pessoa1 = {"João", 30, 'M'};
		//struct Pessoa pessoa1 = {.nome = "João", .idade = 30, .genero = 'M'};

    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Gênero: %c\n", pessoa1.genero);

    return 0;
}
