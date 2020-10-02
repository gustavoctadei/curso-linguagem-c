#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
    char nome[50], rua[50];
    int idade, numero;
};

struct ponto {
    int x, y;
};

struct novo_ponto {
    int x, y;
};

int main() {
    /*
    //Inicializando uma estrutura
    struct pessoa p;
    strcpy(p.nome, "Ricardo");
    strcpy(p.rua, "Rua 1");
    p.idade = 31;
    p.numero = 101;
    */

    /*
    //Inicializando uma estrutura:
    //Podemos definir uma lista de valores para colocar na estrutura (como nos arrays)
    struct pessoa p = {"Ricardo", "Rua 1", 31, 101};

    //Campos nao definidos sao inicializados com zero ou com uma string vazia ("")
    struct pessoa p2 = {"Ricardo", "Rua 1", 31};
    */

///////////////////////////////////////////////////////////////////////////////////////////////////

    //Atribuicao entre estruturas
    struct pessoa p = {"Ricardo", "Rua 1", 31, 101};
    struct pessoa p2;
    strcpy(p2.nome, p.nome);
    strcpy(p2.rua, p.rua);
    p2.idade = p.idade;
    p2.numero = p.numero;    

    //Estruturas suportam atribuicao, desde que sejam do mesmo tipo
    p2 = p;

/////////////////////////////////////////////////////////////////////////////////////////////////

    struct ponto pt1, pt2 = {1, 2};
    struct novo_ponto pt3 = {3, 4};

    //CORRETO
    pt1 = pt2;
    printf("p1 = %d e %d\n", pt1.x, pt1.y);

    //ERRO! Tipos Diferentes
    //pt1 = pt3;
    printf("p1 = %d e %d\n", pt1.x, pt1.y);

    system("pause");
    return 0;
}