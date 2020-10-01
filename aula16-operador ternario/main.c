#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Operador Ternário (?):
    É tipicamente utilizado para fazer atribuições condicionais.

    //Forma geral:
    variavel = condicao ? expressao1 : expressao2
    */

    int x, y, z;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    /*
    if (x > y){
        z = x;
    }
    else{
        z = y;
    }
    */

    z = x > y ? x : y;

    printf("Maior: %d\n", z);

    //Sem a necessidade de atribuicao
    (x > y)? printf("x eh o maior.\n")
           : printf("y eh o maior.\n");

    system("pause");
    return 0;
}