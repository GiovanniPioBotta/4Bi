
/* nodo.h */

#ifndef NODO_H
#define NODO_H

struct nodo {
    int valore;
    struct nodo *prossimo;
};
typedef struct nodo Nodo;

#endif