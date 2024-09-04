#include<stdio.h>
#include<malloc.h>

int main(){
    int *y; //tipo ponteiro para inteiro
    int tamanhodointeiro = sizeof(int);
    printf("Tamanho do inteiro: %i \n", tamanhodointeiro);
    y = (int*) malloc(tamanhodointeiro);
    /* malloc aloca um bloco de memória, e recebe em seu parâmetro o tamanho que
       deve alocar em bytes. Malloc retorna um ponteiro para o bloco de memória alocado,
       esse ponteiro é do tipo void*.
       (int*) significa que o ponteiro retornado por malloc (que é void*) está sendo 
       convertido para um ponteiro de tipo int* */



    int x = 25; //armazenando 25 em x
    int *y= &x; //armazenando no ponteiro x o endereço de x
    *y = 30;    // aramazenando 30 em x
    printf("Valor atual de x:%d\n", x);

    return 0;
}