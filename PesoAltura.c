#include <stdio.h>

// typedef para criar um tipo com o nome da struct(estrutura), facilita a modificação
typedef struct{
    int peso; //peso em kg
    int altura; //altura em cm
} PesoAltura;

int main(){
    PesoAltura pessoa; // Declarando variavel pessoa do tipo PesoAltura definido por typedef
    pessoa.peso = 60;
    pessoa.altura = 165;

    printf("peso:  %d\naltura: %d\n", pessoa.peso, pessoa.altura);
    return 0;
}