#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
    char rua[50];
    int numero
};

struct pessoa {
    char nome[50];
    int idade;
    struct endereco endereco;
};

int main() {
    /*Uma estrutura também é um tipo de dado.
    Logo, uma estrutura pode possuir uma variável do tipo de outra estrutura previamente definida.
    A isso chamamos de Estruturas Aninhadas

    //Forma geral:
    struct nome_struct1 {
        ...
    };

    struct nome_struct2 {
        ...
        struct nome_struct1 nome;
    };*/

    struct pessoa p;
    p.idade = 31;
    p.endereco.numero = 101;

    //Lendo uma estrutura aninhada do teclado
    gets(p.nome);
    scanf("%d", &p.idade);
    gets(p.endereco.rua);
    scanf("%d", &p.endereco.numero);

    system("pause");
    return 0;
}