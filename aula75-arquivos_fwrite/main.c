#include <stdio.h>
#include <stdlib.h>

struct cadastro {
    char nome[30], endereco[30];
    int idade;
};

int main() {
    /*Vimos como é possível ler e escrever em arquivos caracteres
    e sequências de caracteres (strings).

    As funções de escrita de blocos de bytes permitem escrever dados
    mais complexos, como os tipos int, float, double, array, ou mesmo
    um tipo definido pelo programador como, por exemplo, a struct

    Elas devem ser utilizadas preferencialmente com arquivos binários */

    ////////////////////////////////////////////////////////////////////

    /*Para escrever um bloco de bytes em um arquivo usamos a função fwrite()

    //Forma geral:
    int fwrite(void *buffer, int bytes, int count, FILE *fp);

    //Parâmetros:
    buffer: ponteiro genérico para os dados
    bytes: tamanho, em bytes, de cada unidade de dado a ser gravada
    count: total de unidades de dados que devem ser gravadas
    fp: o ponteiro para o arquivo

    //Retorno: total de unidades de dados gravadas com sucesso */

    ///////////////////////////////////////////////////////////////////
    
    FILE *f;
    f = fopen("vetor.txt", "wb");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    int total_gravado, v[5]={1, 2, 3, 4, 5};

    //Grava todo o array no arquivo (5 posições)
    total_gravado = fwrite(v, sizeof(int), 5, f);

    if(total_gravado != 5) {
        printf("Erro na escrita do arquivo.\n");
        system("pause");
        exit(1);
    }

    fclose(f);

    ////////////////////////////////////////////////////////////////////

    /*FILE *f;
    f = fopen("dados.txt", "wb");

    if(f = NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    char str[20] = "Hello World!";
    float x = 5;
    int v[5] = {1, 2, 3, 4, 5};

    fwrite(str, sizeof(char), 20, f);
    fwrite(&x, sizeof(float), 1, f);
    fwrite(v, sizeof(int), 5, f);

    fclose(f); */

    ////////////////////////////////////////////////////////////////////

    /*FILE *arq;
    arq = fopen("struct.txt", "wb");

    if(arq == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    struct cadastro cad = {"Andre", "Rua 1", 31};

    fwrite(&cad, sizeof(struct cadastro), 1, arq);
    fclose(arq); */

    system("pause");
    return 0;
}