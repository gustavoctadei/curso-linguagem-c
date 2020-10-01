#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Comando continue:
    Interromper a execucao atual de qualquer comando de laco (for, while ou do-while) e passa para a proxima repeticao

    //Forma geral:
    repeticao(condicao1) {
        if(condicao2) {
            continue;
        }
    }
    */

    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    while(a <= b) {
        a = a + 1;

        if(a == 5) {
            continue;
        }

        printf("%d\n", a);
    }

    system("pause");
    return 0;
}