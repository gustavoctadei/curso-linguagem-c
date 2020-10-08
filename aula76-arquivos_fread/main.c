#include <stdio.h>
#include <stdlib.h>

/*struct cadastro {
    char nome[30], endereco[30];
    int idade;
}; */

int main() {
    /*Para ler um bloco de bytes de um arquivo, usamos a função fread()

    //Forma geral:
    int fread(void *buffer, int bytes, int count, FILE *fp);

    //Parâmetros:
    buffer: ponteiro genérico para os dados
    bytes: tamanho, em bytes, de cada unidade de dado a ser lida
    count: total de unidades de dados que devem ser lidas
    fp: o ponteiro para o arquivo

    //Retorno: total de unidades lidas com sucesso */

    /////////////////////////////////////////////////////////////////////

    FILE *f = fopen("vetor.txt", "rb");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    int total_lido, v[5]; // = {1, 2, 3, 4, 5};

    total_lido = fread(v, sizeof(int), 5, f);
    if(total_lido != 5) {
        printf("Erro na leitura do arquivo.\n");
        system("pause");
        exit(1);
    }
    fclose(f);

    int i;
    for(i = 0; i < 5; i++) {
        printf("%d | ", v[i]);
    }
    printf("\n");

    ///////////////////////////////////////////////////////////////////

    /*FILE *f = fopen("dados.txt", "rb");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    char str[20]; //= "Hello World";
    float x; //= 5;
    int v[5]; //= {1, 2, 3, 4, 5};

    fread(str, sizeof(char), 20, f);
    fread(&x, sizeof(float), 1, f);
    fread(v, sizeof(int), 5, f);

    printf("%s\n", str);
    printf("%f\n", x);

    int i;
    for(i = 0; i < 5; i++) {
        printf("%d | ", v[i]);
    }
    printf("\n");

    fclose(f); */

    ///////////////////////////////////////////////////////////////////

    /*FILE *f = fopen("struct.txt", "rb");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    struct cadastro cad; //= {"Andre", "Rua 1", 31};
    //struct cadastro cad[5]; //Vetor de struct cadastro

    fread(&cad, sizeof(struct cadastro), 1, f);
    //fread(cad, sizeof(struct cadastro), 5, f);

    printf("%s - %s - %d\n", cad.nome, cad.endereco, cad.idade);

    fclose(f); */

    system("pause");
    return 0;
}