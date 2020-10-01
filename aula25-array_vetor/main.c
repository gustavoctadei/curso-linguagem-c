#include <stdio.h>
#include <stdlib.h>
//#define N 100
#define N 5

int main() {
    /*Array: conjunto de variaveis do mesmo tipo usando o mesmo nome

    //Forma geral:
    tipo nome_array[tamanho];

    //Exemplo: array para guardar notas de 100 alunos:
    float nota[100];
    */

    /*O tamanho de um array deve ser sempre um valor ou expressao inteira e constante
    int n = 5;

    float F[N+1]; //Correto, N constante definida acima do main
    char texto[30]; //Correto
    int vetor[n]; //errado, n é variável
    int v[4.5]; //errado, tamanho do vetor deve ser inteiro
    */

    /*Acesso aos elementos: índice
    float notas[100];
    notas[0] = 81; //primeiro indice
    notas[1] = 55; //segundo indice
    notas[99] = 72; //ultimo indice
    */

    /*Cada posicao do array é uma variável
    float notas[100], vetor[100];

    scanf("%d", &notas[5]); //comando de leitura
    notas[0] = 10; //comando de atribuicao
    notas[1] = notas[5] + notas[0]; //expressao
    notas = vetor; //errado
    */

    float notas[N], media = 0.0;
    int i;

    for(i = 0; i < N; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);

        media = media + notas[i];
    }

    media = media / N; //Media da turma

    for(i = 0; i < N; i++) {
        if(notas[i] > media) {
            printf("Aluno %d: %f\n", i, notas[i]);
        }
    }

    system("pause");
    return 0;
}