#include <stdio.h>
#include <stdlib.h>

//cria um sinônimo para int
typedef int inteiro;

struct cadastro {
    char nome[50], rua[50];
    int idade, numero;
};
typedef struct cadastro Cadastro;

typedef unsigned int positivos[5];

int main() {
    /*Comando typedef:
    permite que o programador defina um "apelido" para um tipo existente

    //Forma geral:
    typedef tipo_existente novo_nome; */

    //"int" e "inteiro" são o mesmo tipo
    int x = 10;
    inteiro y = 20;

    y = y + x;

    printf("Soma: %d\n", y);

    ////////////////////////////////////////////////////////////////////////
    
    /*"struct cadastro" e "Cadastro" são o mesmo tipo */
    struct cadastro c1;
    Cadastro c2;

    ////////////////////////////////////////////////////////////////////////

    /*O comando typedef deve ser usado com cuidado pois ele pode produzir declarações confusas.
    No caso, "positivos" é um sinônimo para "array de 5 inteiros positivos" */

    positivos v = {10, 20, 30, 40, 50}; //Só olhando por aqui, não daria para perceber que é um vetor
    int i;

    for(i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    system("pause");
    return 0;
}