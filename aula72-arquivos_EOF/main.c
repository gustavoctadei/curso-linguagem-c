#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Vimos nas últimas aulas que a constante
    EOF ("End Of File") indica o fim de um arquivo */

    /*Porém, quando manipulando dados binários, um valor
    inteiro igual ao valor da constante EOF pode ser lido

    Para evitar este tipo de situação, a Linguagem C inclui
    a função feof()

    int feof(FILE *fp)

    Essa função retorna um valor inteiro igual a zero se ainda
    não tiver atingido o final do arquivo */

    FILE *f;
    f = fopen("arquivo.txt", "r");

    if(f == NULL) {
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }

    char c = fgetc(f);
    while( !feof(f) ) { //Usando feof()
        printf("%c", c);
        c = fgetc(f);
    }
    printf("\n");
    printf("Fim\n");

    fclose(f);

    system("pause");
    return 0;
}