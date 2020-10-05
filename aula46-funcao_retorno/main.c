#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime(int n) {
    int i;

    for(i = 0; i <= n; i++) {
        printf("Linha %d\n", i);
    }
}

int soma(int x, int y) {
    return x + y;
}

int maior(int x, int y) {
    if(x > y) {
        return x;
    }
    else {
        return y;
    }
}

void imprime_log(float x) {
    if(x <= 0) {
        return; //Termina a função
    }

    printf("Log = %f\n", log(x));
}

int main() {
    /*Retorno da função:
    é como uma função devolve o seu resultado (se ele existir) para quem a chamou

    //Forma geral:
    tipo nome_funcao(parametros) {
        conjunto de declarações e comandos

        return expressão;
    }

    //O tipo de retorno pode ser
    int, char, float, double
    void
    struct
    ponteiros

    Um "array" só pode ser retornado se ele estiver dentro de uma struct */

    ///////////////////////////////////////////////////////////////////////////////

    //Função do tipo void não tem return
    imprime(5);

    ///////////////////////////////////////////////////////////////////////////////

    /*Funções que não sejam do tipo void devem sempre retornar um valor.
    Para chamá-la, basta atribuir a chamada da função (nome e parâmetros) a uma variável */
    int x = soma(4, 5);
    printf("x = %d\n", x);

    printf("soma = %d\n", soma(2, 3));

    ///////////////////////////////////////////////////////////////////////////////

    /*Uma função pode ter mais de um comando return */
    //int x;
    x = maior(4, 5);
    printf("Maior = %d\n", x);

    ///////////////////////////////////////////////////////////////////////////////

    /*O comando return pode ser usado sem uma expressão para terminar uma função
    do tipo void */
    float f;
    
    printf("Digite f: ");
    scanf("%d", &f);

    imprime_log(f);

    system("pause");
    return 0;
}