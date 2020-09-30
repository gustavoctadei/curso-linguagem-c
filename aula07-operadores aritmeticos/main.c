#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    soma:           +
    subtração:      -
    multiplicação:  *
    divisão:        /
    resto:          %
    */

/////////////////////////////////////////////

/*
   //Exemplos de soma
    int x1, x2 = 10, x3 = 12;
    char ch1, ch2 = '0', ch3 = 'A';
    float f1, f2 = 5.25, f3 = 10.5;

    x1 = x2 + x3;
    ch1 = ch2 + ch3;
    f1 = f2 + f3;

    printf("x1 = %d\n", x1);
    printf("ch1 = %c (%d)\n", ch1, ch1);
    printf("f1 = %f\n", f1);
*/

/////////////////////////////////////////////

/*
    //Exemplos de subtracao
    int x1, x2 = 10, x3 = 12;
    float f1, f2 = 5.25;

    x1 = x3 - x2;
    f1 = -f2;

    printf("x1 = %d\n", x1);
    printf("f1 = %f\n", f1);
*/

//////////////////////////////////////////

/*
    //Exemplos de Multiplicacao
    int x1, x2 = 10, x3 = 12;
    float f1, f2 = 5.25;
    
    x1 = x3 * x2;
    f1 = 3 * f2;

    printf("x1 = %d\n", x1);
    printf("f1 = %f\n", f1);
*/

/////////////////////////////////////////////

/*
    //Exemplos de Divisão
    int x1, x2 = 9;
    float f1, f2;

    x1 = x2 / 2; //Resultado da divisao é decimal, mas a parte decimal será perdida pois a variável x1 é do tipo int
    printf("x1 = %d\n", x1);

    f1 = x2 / 2; //Apesar de f1 ser do tipo float, divisao entre dois inteiros dá resultado inteiro em C
    printf("f1 = %f\n", f1);

    f2 = x2 / 2.0; //Para o resultado ser real, pelo menos um dos dividendos deverá ser real
    printf("f2 = %f\n", f2);
*/

/////////////////////////////////////////////

/*
    //Precedência, hierarquia das operacoes aritmeticas
    float f1, f2 = 5.25;

    f1 = f2 + 10 / 2.0;
    printf("f1 = %f\n", f1);

    f1 = (f2 + 10) / 2.0;
    printf("f1 = %f\n", f1);
*/

/////////////////////////////////////////////

    //Exemplos da operacao resto (da divisao)
    int x1, x2 = 9;

    x1 = x2 % 2;
    printf("x1 = %d\n", x1);

    x1 = x2 % 5;
    printf("x1 = %d\n", x1);

    x1 = x2 % 9;
    printf("x1 = %d\n", x1);

    system("pause");
    return 0;
}