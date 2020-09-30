#include <stdio.h>
#include <stdlib.h>

int main(){

/*
    //Incremento
    int x = 10, y = 10;

    x++;
    ++y;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
*/

/////////////////////////////////////////////

/*
    //Decremento
    int x = 10, y = 10;

    x--;
    --y;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
*/

/////////////////////////////////////////////

    //Incremento com atribuicao
    int x = 10, y = 10;

    //y = x++;
    // y = x;
    // x++;

    y = ++x;
    // x++;
    // y = x;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    system("pause");
    return 0;
}