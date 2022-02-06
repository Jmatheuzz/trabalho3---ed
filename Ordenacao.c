#include <stdio.h>
#include <stdlib.h>
#include "Ordenacao.h"

int bubbleSort(int n, int *v){
    int i, j, qtdtrocas = 0;
    for(i = n-1; i >= 1; i--){
        int troca = 0;
        for(j = 0; j < i; j++){
            if(v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                troca = 1;
                qtdtrocas++;
            }
        }
    if(troca == 0)
        return qtdtrocas;
    }
}
int qtdTrocas = 0;
int quickSort(int n, int *v){
    if(n <= 1)
        return qtdTrocas;
    else{
        int x = v[0], a = 1, b = n-1;
        do{
        while(a < n && v[a] <= x) a++;
        while(v[b] > x) b--;
        if(a < b){
            int temp = v[a];
            v[a] = v[b];
            v[b] = temp;
            a++; b++;
            qtdTrocas++;
        }
        }while(a <= b);
    /*troca pivô*/
        v[0] = v[b];
        v[b] = x;
    /*ordena subvetores restantes*/
        quickSort(b, v);
        quickSort(n - a, &v[a]);
        }   
}


void merge(int vetor[], int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));
    while(com1 <= meio && com2 <= fim){
        if(vetor[com1] < vetor[com2]) {
            vetAux[comAux] = vetor[com1];
            com1++;
        } else {
            vetAux[comAux] = vetor[com2];
            com2++;
        }
        comAux++;
    }
    while(com1 <= meio){ //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }
    while(com2 <= fim) { //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }
    for(comAux = comeco; comAux <= fim; comAux++){ //Move os elementos de volta
        vetor[comAux] = vetAux[comAux-comeco];
    }
    free(vetAux);
}

void mergeSort(int vetor[], int comeco, int fim){
    if (comeco < fim) {
        int meio = (fim+comeco)/2;
        mergeSort(vetor, comeco, meio);
        mergeSort(vetor, meio+1, fim);
        merge(vetor, comeco, meio, fim);
    }
}

int selectionSort(int tam, int num[]){
    int i, j, min, aux, qtdTrocas = 0;
    for (i = 0; i < (tam-1); i++){
        min = i;
        for (j = (i+1); j < tam; j++) {
            if(num[j] < num[min])
                min = j;
        }
        if (num[i] != num[min]) {
            qtdTrocas++;
            aux = num[i];
            num[i] = num[min];
            num[min] = aux;
        }
    }
    return qtdTrocas;
}
