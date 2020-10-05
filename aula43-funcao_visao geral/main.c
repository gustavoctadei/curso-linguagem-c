#include <stdio.h>
#include <stdlib.h>

//Exemplo de função
int quadrado(int a) {
    return a * a;
}

/*//Protótipo da função
int quadrado(int a); //protótipo1
int quadrado(int); //protótipo2 */

int main() {
    /*Função: conjunto de comandos que recebe um nome e pode ser chamada em parte
    do programa quantas vezes forem necessárias.
    Vantagens: estruturação do programa e reutilização de códigos

    //Exemplos:
    scanf("%d", &x);
    printf("%d\n", x); */

    /*Forma geral de uma função
    tipo nome_funcao(parametros) {
        conjunto de declarações e comandos
    } */

    /*Onde declarar a função?
    Se for depois do main(), precisamos definir o seu protótipo */

    int x, y;

    printf("Digite x: ");
    scanf("%d", &x);

    y = quadrado(x);

    printf("y: %d\n", y);

    system("pause");
    return 0;
}

/*Função:
int quadrado(int a) {
    return a * a;
} */