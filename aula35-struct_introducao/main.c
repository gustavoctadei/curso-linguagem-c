#include <stdio.h>
#include <stdlib.h>

//definindo uma estrutura
struct pessoa {
    char nome[50], rua[50];
    int idade, numero;
};

struct ponto2D {
    int x, y;
};

struct ponto3D {
    int x, y, z;
};

int main() {
    /*A Linguagem C nos permite também criar nossos proprios tipos de variaveis. Um deles é a struct, também chamada de Estrutura

    //Forma geral:
    struct nome_struct {
        tipo1 nome1;
        tipo2 nome2;
        ...
        tipoN nomeN;
    };
    */

    /*
    //Declaracao de variaveis
    char nome[50], rua[50];
    int idade, numero;
    */

    //Declarcao de uma variavel struct
    struct pessoa p;
    p.idade = 31; //Comando de atribuicao
    scanf("%d", &p.numero); //Comando de leitura
    gets(p.nome); //Comando de leitura
    p.numero = p.numero + p.idade; //Expressao

    //Sem Struct
    char nome1[50], nome2[50], nome3[50], nome4[50];
    int idade1, idade2, idade3, idade4;
    char rua1[50], rua2[50], rua3[50], rua4[50];
    int numero1, numero2, numero3, numero4;

    //Com Struct
    struct pessoa p1, p2, p3, p4;

////////////////////////////////////////////////////////////////////

    /*Estruturas diferentes podem ter campos com o mesmo nome
    */
    struct ponto2D pt2;
    struct ponto3D pt3;

    pt2.x = 10;
    pt3.x = 12;

    printf("%d %d\n", pt2.x, pt3.x);

    system("pause");
    return 0;
}