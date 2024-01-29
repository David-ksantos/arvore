#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *esq;
    struct no *dir;
} no;
typedef no *arvore;

arvore inserir(arvore raiz, int valor)
{
    if (raiz == NULL)
    {
        arvore novo = (arvore)malloc(sizeof(no));
        novo->valor = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
    }

    else
    {
        if (valor > raiz->valor)
        {
            raiz->dir = inserir(raiz->dir, valor);
        }
        else
        {
            raiz->esq = inserir(raiz->esq, valor);
        }
        return raiz;
    }
}

int main()
{
    return 0;
}