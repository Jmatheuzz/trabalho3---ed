#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Auxiliares.h"
#include "Ordenacao.h"


int main(){
    float tempos[10] = {};
    float trocas[10] = {};
    
    for (int i = 0; i < 10; i++)
    {
            int *vetor = gerador(TAM5K);

            clock_t Ticks[2];
            
            Ticks[0] = clock();

            //int qtdTrocas = bubbleSort(TAM5K, vetor);
            //int qtdTrocas = quickSort(TAM5K, vetor);
            //selectionSort(TAM5K, vetor);
            int qtdTrocas = selectionSort(TAM5K, vetor);

            Ticks[1] = clock();
            
            tempos[i] = geraTempo(Ticks[0], Ticks[1]);
            trocas[i] = qtdTrocas;

    }

    printf("Tempo medio: %g ms\n", calculaMedia(10, tempos));
    printf("Trocas medias: %g \n\n", calculaMedia(10, trocas));
    for (int i = 0; i < 10; i++){
        printf("Tempo %d: %g\n", i, tempos[i]);
        printf("Trocas %d: %.0f\n\n", i, trocas[i]);
    }
        

    return 0;
}