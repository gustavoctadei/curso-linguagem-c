#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    O comando if:
    permite executar ou nao um conjunto de comandos de acordo com uma condicao

    //forma geral
    if (condicao){
        conjunto de comandos
    }
    */

    int x, y = -1;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    if (x > 0){
        printf("O valor eh positivo\n");
    }

    if ( (x%2 == 0) || (x < 0) ){
        printf("O valor eh par ou negativo\n");
    }

    //Quando há apenas um comando "dentro" do if, chaves não são necessárias
    if ( (x%2 == 0) || (x < 0) )
        printf("O valor eh par ou negativo\n");

    if (x > 0){
        y = x % 3;
        printf("O resto de %d/3 eh: %d\n", x, y);
    }

    //Desta forma, apenas o primeiro comando estará dentro da condição e o segundo comando sempre
    //será executado, mesmo que não satisfaça a condição
    if (x > 0)
        y = x % 3;
        printf("O resto de %d/3 eh: %d\n", x, y);

    printf("Fim do programa\n");
    system("pause");
    return 0;
}