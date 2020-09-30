#include <stdio.h>
#include <stdlib.h>

int main(){
/*
    char letra;
    int nro;
    float n;
    double d;

    scanf("%c", &letra);
    scanf("%d", &nro);
    scanf("%f", &n);
    scanf("%f", &d);
*/

////////////////////////////////////////////////

/*
    int nro;

    printf("Digite um numero: ");
    scanf("%d", &nro);
    printf("Numero Digitado: %d\n", nro);
*/

/////////////////////////////////////////////////

    int nro;
    float f;
    
    printf("Digite dois numeros: ");
    scanf("%d %f", &nro, &f);
    printf("Numeros: %d e %f\n", nro, f);

    system("pause");
    return 0;
}