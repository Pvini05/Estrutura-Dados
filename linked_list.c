#include <stdio.h>

//estrutura de um nó da lista
struct Node{
    int data; //Dado do nó
    struct Node* next; // Ponteiro 
}

//inicializa a lista (ponteiro para null)
void Inicialize(struct Node** head_ref) {
    *head_ref = NULL;
}