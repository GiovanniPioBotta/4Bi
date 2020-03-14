#include <stdio.h>
#include "nodo.h"

void stampa(Nodo *head);

int main()
{
    Nodo *head = NULL;
    stampa(head);

    Nodo n1;
    n1.valore = 3;
    n1.prossimo = NULL;
    
    head = &n1;
    stampa(head);

    Nodo n2;
    n2.valore = 7;
    n2.prossimo = NULL;
    
    n1.prossimo = &n2;
    stampa(head);

    Nodo n3;
    n3.valore = 10;
    n3.prossimo = NULL;
    
    n3.prossimo = head;
    head = &n3;
   stampa(head);
    
    return 0;
}


void stampa(Nodo *head)
{
    Nodo *temp;

    temp = head;
    while (temp != NULL) {
        printf("%d ---> ", temp->valore);
        temp = temp->prossimo;
    }
    printf("NULL\n");
}