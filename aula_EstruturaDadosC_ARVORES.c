//REPRESENTAÇÃO DE CADA NÓ DA ARVORE STRUCT

typedef struct {
    No *raiz;
    int tam;
} ArvB;

//REPRESENTAÇÃO DE CADA NÓ DA ARVORE STRUCT

typedef struct no{
    int chave;
    struct no *esquerda, *direita;
} No;

//PROGRAMA PRINCIPAL
#include <stdio.h>
#include <stdlib.h>
#include "operacoes.h"

int main(){
    ArvB arv;
    arv.raiz = NULL;
    No *raiz = NULL;
    
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 4);
    raiz = inserir(raiz, 2);
    raiz = inserir(raiz, 2);
    
    imprimir(raiz);
}

//FUNÇÃO inserir

No* inserir(No *raiz, int valor){
    if(raiz == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->chave = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        return 0;
    } else {
        if(valor < raiz->chave)raiz->esquerda = inserir(raiz->esquerda, valor);
        if(valor > raiz->chave) raiz->direita = inserir(raiz->direita, valor);
        return raiz;
    }
}

//FUNÇÃO IMPRIME

void imprime(No *raiz){
    if(raiz != NULL){
        imprime(raiz->esquerda);
        printf("%d", raiz->chave);
        imprime(raiz->direita);
    }
}

//FUNÇÃO REMOVE

No* remover(No *raiz, int item){
    if(raiz == NULL){
        printf("Valor não encontrado");
        return NULL;
    } else {
        if(raiz->chave == item){
            if(raiz->squerda == NULL && raiz->direita == NULL){
                free(raiz);
                return NULL;
            } else{
                if(raiz->esquerda == NULL || raiz->direita == NULL){
                    No *aux;
                    if(raiz->esquerda != NULL)
                       aux = raiz->esquerda;
                    else
                       aux = raiz->direita;
                    free(raiz);
                    return aux;
                } else{
                    No *aux = raiz->esquerda;
                    while(aux->direita != NULL)
                      aux = aux->direita;
                    raiz->chave = aux->chave;
                    aux->chave = item;
                    raiz->esquerda = remover(raiz->esquerda, item);
                    return raiz;
                }
            }
        } else {
            if(item < raiz->chave)
               raiz->esquerda = remover(raiz->esquerda, item);
            else 
               raiz->direita = remover(raiz->direita, item);
            return raiz;
        }
    }
}