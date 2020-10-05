#include <stdio.h>
#include <stdlib.h>

void soma_valor(int n) {
    n = n + 1;
}

void soma_referencia(int *n) {
    *n = *n + 1;
}

void soma_mais_um(int *n) {
    *n = *n + 1;
    printf("Dentro da funcao: x = %d\n", *n);
}

int main() {
    /*Passagem por referência: o endereço de onde o dado está armazenado
    na memória é passado para a função

    Assim, a função pode modificar o valor do parâmetro */

    /*Exemplo de Passagem "Por Referência":
    função scanf() */
    int x = 5;
    printf("Antes do scanf: x = %d\n", x);

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("Depois do scanf: x = %d\n", x);

    /*Parâmetro por referência: usa-se o operador "*" na frente do nome do
    parâmetro durante a declaração da função

    //Por Valor
    void soma_mais_um(int n);

    //Por Referência
    void soma_mais_um(int *n); */

    /*Parâmetro por referência: toda vez que a variável for usada, o operador
    "*" deverá ser usado na frente do nome da variável */

    //////////////////////////////////////////////////////////////////////////

    /*Parâmetro por referência: na chamada da função é necessário utilizar o
    operador "&" na frente da variável que será passada por referência */
    //int x;
    x = 5;
    printf("Antes da funcao: x = %d\n", x);

    soma_mais_um(&x);

    printf("Depois da funcao: x = %d\n", x);

    /////////////////////////////////////////////////////////////////////////

    //int x;
    x = 5;

    soma_valor(x);
    printf("Depois da funcao: x = %d\n", x);

    int y = 5;

    soma_referencia(&y);
    printf("Depois da funcao: y = %d\n", y);

    system("pause");
    return 0;
}