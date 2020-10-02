#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
    char nome[50], rua[50];
    int idade, numero;
};

int main() {
    //Com struct
    //struct pessoa p1, p2, p3, p4

    /*A STRUCT é um tipo de dado, e portanto a Linguagem C suporta a declaração de um array de estrutura
    */
    //Com struct e com array
    struct pessoa p[4];

    /*Acesso aos campos do array de struct:
    Em um array de estruturas, o operador de ponto (.) vem depois dos colchetes []
    do índice do array
    */
    p[0].idade = 31;
    strcpy(p[1].nome, "Ricardo");
    p[2].numero = p[0].numero - 1;

    /*A combinacao de arrays e estruturas permite que se manipule de modo muito mais prático
    várias variáveis de estrutura*/
    int i;
    for(i = 0; i < 4; i++) {
        gets(p[i].nome);
        scanf("%d", &p[i].idade);
        gets(p[i].rua);
        scanf("%d", p[i].numero);
    }

    system("pause");
    return 0;
}