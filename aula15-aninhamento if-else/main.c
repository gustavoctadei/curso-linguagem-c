#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Aninhamento de if-else:
    Trata-se do uso de outro comando if, ou if-else dentro de um comando if ou else

    //Exemplo:
    if (condicao 1){
        if (condicao 2){
            Primeiro conjunto de comandos
        }else{
            Segundo conjunto de comandos
        }else{
            Terceiro conjunto de comandos
        }
    }
    */

    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num == 0){
        printf("O numero e igual a 0.\n");
    }else{
        if (num > 0){
            printf("O numero e maior do que 0.\n");
        }else{
            printf("O numero e menor do que 0.\n");
        }
    }

    system("pause");
    return 0;
}