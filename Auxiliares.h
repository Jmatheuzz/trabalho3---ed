#include <time.h>

#define TAM5K 5000
#define TAM10K 10000
#define TAM50K 50000

/*Gera e retorna um vetor de inteiros pseudo-aleatórios, entre 0 e 9999*/
int* gerador(int tam);

/*Retorna a diferença entre dois tempos, em milissegundos*/
double geraTempo(clock_t tick1, clock_t tick2);

/*Calcula a média aritmética simples dos elementos de um vetor*/
float calculaMedia(int qtdValores, float *valores);

