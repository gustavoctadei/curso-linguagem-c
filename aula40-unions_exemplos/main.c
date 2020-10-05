#include <stdio.h>
#include <stdlib.h>

union tipo {
    short int x;
    unsigned char c[2];
};

int main() {
    /*Por que usar uma union?
    1) Economia de memória: se seus campos nunca são usados ao mesmo tempo,
    não faz sentido reservar espaço para os dois.*/

    union tipo v;
    
    v.x = 1545;
    printf("x = %d\n", v.x);

    v.c[0] = 'a';
    v.c[1] = 'b';
    printf("c[0] = %c\n", v.c[0]);
    printf("c[1] = %c\n", v.c[1]);

    /*Por que usar uma union?
    2) Manipulação de bits: uma union permite fazer acessos controlados
    a nível de bits.*/
    
    //Exemplo sem union:
    short int x = 1545; //00000110 00001001
    unsigned char c0, c1;
    c0 = 0x00FF & x; //00001001 -> 9
    c1 = x >> 8; //00000110 -> 6
    
    printf("x = %d\n", x);
    printf("c0 = %d\n", c0);
    printf("c1 = %d\n", c1);

    /*Um dos usos mais comuns de uma união é unir um tipo básico a um array
    de tipos menores.*/
    //union tipo v;
    v.x = 1545; //00000110 00001001
    
    printf("x = %d\n", v.x);

    //00000110 -> 9
    printf("c[0] = %d\n", v.c[0]);

    //00001001 -> 6
    printf("c[1] = %d\n", v.c[1]);

    system("pause");
    return 0;
}