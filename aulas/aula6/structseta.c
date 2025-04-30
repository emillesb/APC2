struct Pessoa {
    char nome[100];
    int idade;
    char genero; // M, F
};

int main() {
    struct Pessoa pessoa1 = {"João", 30, 'M'};
    struct Pessoa *ponteiro_pessoa = &pessoa1;

    printf("Nome: %s\n", ponteiro_pessoa->nome);
    printf("Idade: %d\n", ponteiro_pessoa->idade);
    printf("Gênero: %c\n", ponteiro_pessoa->genero);

    return 0;
}