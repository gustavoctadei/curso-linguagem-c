#include <stdio.h>
#include <stdlib.h>

float raiz(float r);
int soma(int x, int y);

//Protótipos
float leitura(); //Apenas ignora os parâmetros que forem passados
int le_arquivo(void); //Nao deixa passar nenhum parâmetro

int main() {
    /*Parâmetros da função:
    permitem os programador passar uma informação de um trecho de código para
    dentro da função
    float raiz(float r);
    int soma(int x, int y);
    int soma(int x, y); //ERRADO
    float exponencial(float a, int b); */

    float k, w = 5.4;
    
    k = raiz(w);
    k = raiz(5.4);
    //k = raiz(); //ERRO
    //k = raiz(w, 5.4); //ERRO

    int x, y = 1, z = 2;

    x = soma(y, z);
    x = soma(1, 2);
    x = soma(y, 2);

    //////////////////////////////////////////////////////////////////////////////

    /*Funções sem parâmetros:
    basta deixar a lista vazia ou colocar a palavra void no lugar 
    float leitura();
    int le_arquivo(void); */

    float y;

    y = leitura();
    y = leitura(5);
    y = leitura(5, 'a');

    int x;

    x = le_arquivo();
    //x = le_arquivo(5); //ERRO

    system("pause");
    return 0;
}