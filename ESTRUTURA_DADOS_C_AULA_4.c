//AULA 4 ESTRUTURA DE DADOS HETERONGÊNEAS PARTE II
//VETORES DE STRUCTS EM C EXEMPLO
#include <stdio.h>

typedef struct {
    char *nome;
    int idade;
    float salario;
} Dados;

int main() {
    Dados pessoa[3];
    
    pessoa[0].nome = "joao";
    pessoa[0].idade = 35;
    pessoa[0].salario = 6174.00;
    
    pessoa[1].nome = "luana";
    pessoa[1].idade = 27;
    pessoa[1].salario = 2374.00;
    
    pessoa[2].nome = "joao";
    pessoa[2].idade = 35;
    pessoa[2].salario = 6174.00;
    
    pessoa[3].nome = "joao";
    pessoa[3].idade = 45;
    pessoa[3].salario = 7674.00;
    
    for (int i = 0; i < 3; i++){
        printf("%s\n", pessoa[i].nome);
        printf("%d\n", pessoa[i].idade);
        printf("%.2f\n", pessoa[i].salario);
        printf("-------------\n");
        
    }
    return 0;
}

----------------------------------------------------------
//STRUCT E PONTEIROS (IMPLEMENTAÇÃO PROGRAMA PRINCIPAL)
#include <stdio.h>

int main() {
    int opcao;
    Item *cabeca = NULL;
    
    do{
        printf("\n---Opções----");
        printf("\n1 -> Inserir um novo item");
        printf("\n2 -> Imprimir um novo item");
        printf("\n0 -> Sair: \n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1: inserir(&cabeca); break;
            case 2: imprimir(&cabeca); break;
            case 0: break;
            default: printf("\n\n Opção Inválida");
        }
        fflush(stdin);
    } while(opcao != 0);
    return 0;
}

----------------------------------------------------------
//LISTANDO ELEMENTOS: inserir

void inserir (Item **cabeca){
    Item *itemAtual, *itemNOVO;
    int numero;
    
    printf("Informe o Item: ");
    scanf("%d", &numero);
    
    if (*cabeca == NULL){
        *cabeca = (Item) malloc(sizeof(Item)));
        (*cabeca)->conteudo = numero;
        (*cabeca)->proximo = NULL;
    }else{
        itemATUAL = *cabeca;
        while(itemATUAL->proximo != NULL)
          itemATUAL = itemATUAL->proximo;
        itemNOVO = (Item *)malloc(sizeof(Item));
        itemNOVO->conteudo = numero;
        itemNOVO->proximo = NULL;
        itemATUAL->proximo = itemNOVO;
    }
}
----------------------------------------------------------
//LISTANDO ELEMENTOS: imprimir

void imprimir(Item *itemATUAL){
    int i = 0;
    while (itemATUAL != NULL){
        printf(itemATUAL != NULL){
            printf("Item: %d ", itemATUAL->conteudo);
            itemATUAL = itemATUAL->proximo;
        }
    }
}



