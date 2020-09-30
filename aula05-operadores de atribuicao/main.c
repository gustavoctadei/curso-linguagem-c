#include <stdio.h>
#include <stdlib.h>

int main(){
/*
    //variavel = expressão
    int x = 5, y;
    y = x;
    y = x + 10;
*/

/////////////////////////////////////////

/*
    //As expressoes abaixo estao erradas
    5 = y;
    x + 10 = y
*/

/////////////////////////////////////////

/*
    int x, y, z;
    x = y = z = 10; //z recebe 10, y recebe o valor de z, x recebe o valor de y
*/

/////////////////////////////////////////

/*
    int x = 97;
    char ch1, ch2 = 'A';
    
    ch1 = x;
    printf("ch1 = %c\n", ch1);

    x = ch2;
    printf("x = %d\n", x);
*/

////////////////////////////////////////

/*
    int x = 833;
    float f1, f2 = 5.25;

    f1 = x;
    printf("f1 = %f", f1);

    x = f2;
    printf("x = %d", x);
*/

//////////////////////////////////////////

    float f = 97.3;
    char ch1, ch2 = 'A';

    ch1 = f;
    printf("ch1 = %c\n", ch1);

    f = ch2;
    printf("f = %f\n", f);

    system("pause");
    return 0;
}