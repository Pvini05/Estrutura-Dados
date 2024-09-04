#include<stdio.h>
#include<malloc.h>

int main(){
    int *y; //tipo ponteiro para inteiro
    int tamanhodointeiro = sizeof(int);
    printf("Tamanho do inteiro: %i \n", tamanhodointeiro);
    y = (int*) malloc(tamanhodointeiro);
    /*malloc reserva um espaço na memoria e retorna um ponteiro para void (void *)
    então precisa fazer um cast para ele retornar um valor de outro tipo, "(int *)"
    "(int *)" faz com que o espaço reservado por malloc seja convertido do tipo void para o tipo int */



    int x = 25; //armazenando 25 em x
    int *y= &x; //armazenando no ponteiro x o endereço de x
    *y = 30;    // aramazenando 30 em x
    printf("Valor atual de x:%d\n", x);

    return 0;
}