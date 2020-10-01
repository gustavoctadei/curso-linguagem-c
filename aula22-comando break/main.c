#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Comando break:
    Interromper a repeticao de qualquer comando de laço (for, while ou do-while)

    //Forma geral:
    repeticao(condicao1) {
        if(condicao2) {
            break;
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
            break;
        }

        printf("%d\n", a);
    }
    
    system("pause");
    return 0;
}