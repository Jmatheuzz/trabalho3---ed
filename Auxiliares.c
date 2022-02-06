#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Auxiliares.h"



int* gerador(int tam){
    int *vetor = (int*)malloc(tam * sizeof(int));
    if (vetor != NULL) {
        srand(time(NULL));
        for (int i = 0; i < tam; i++){
            vetor[i] = rand() % 10000;
        }
        return vetor;
    }
    else {
        printf("Problema de memoria");
        exit(1);
    }
}

double geraTempo(clock_t tick1, clock_t tick2){
    double tempo = (tick2 - tick1) * 1000.0 / CLOCKS_PER_SEC;
    return tempo;
}

float calculaMedia(int qtdValores, float *valores){
    float soma = 0;
    for (int i = 0; i < qtdValores; i++){
        soma += valores[i];
    }
    return soma/qtdValores;
}
