#include <stdio.h>
#include<malloc.h>

// typedef para criar um tipo com o nome da struct(estrutura), facilita a modificação
typedef struct{
    int peso; //peso em kg
    int altura; //altura em cm
} PesoAltura;

int main(){
    PesoAltura *pessoa1; //ponteiro para PesoAltura
    pessoa1 = (PesoAltura *) malloc(sizeof(PesoAltura));
    pessoa1 -> peso = 80;
    pessoa1 -> altura = 185;

    return 0;
}