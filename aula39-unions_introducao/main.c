#include <stdio.h>
#include <stdlib.h>

//Definindo uma união
union tipo {
    short int x;
    unsigned char c;
};

struct tipoS {
    short int x;
    unsigned char c;
};

int main() {
    /*A linguagem C nos permite também criar nossos próprios tipos de variáveis.
    Além da struct, podemos criar uma union, também chamada de União*/

    /*Forma Geral:
    union nome_union {
        tipo1 nome1;
        tipo2 nome2;
        ...
        tipoN nomeN;
    };*/

    //Declaração de uma variável union
    union tipo u;

    /*Cada campo (variável) da union pode ser acessado usando o operador de "." (ponto)*/
    u.x = 5;
    u.c = 'a';

    //////////////////////////////////////////////////////////////////////////////////////

    /*STRUCT vs UNION
    struct: espaço para armazenar todos os seus elementos*/
    struct tipoS v;
    v.x = 5;
    v.c = 'a'; //97
    printf("x = %d\n", v.x);
    printf("c = %c\n", v.c);

    //union tipo u;
    //u.x = 5;
    //u.c = 'a';
    printf("x = %d\n", u.x);
    printf("c = %c\n", u.c);

    system("pause");
    return 0;
}