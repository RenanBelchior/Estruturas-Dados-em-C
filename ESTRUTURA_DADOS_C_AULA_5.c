//ESTRUTURA DE DADOS EM C
//MODULARIZAÇÃO EM C

//MODULARIZAÇÃO EM C
//Funções Internas Exemplo 1
#include <stdio.h>

void imprimir();

int main(){
    imprimir()
    return 0;
}

void imprimir(){
    printf("Hello World!");
}
------------------------------------------------------------
//MODULARIZAÇÃO EM C
//Funções Internas Exemplo 2
#include <stdio.h>

double divPI(double a){
    a = a / 3.14;
    return a;
}

int main(){
    double x = 5.0;
    printf("%lf", divPI(x));
    return 0;
}
------------------------------------------------------------
//MODULARIZAÇÃO EM C
//Funções Internas Exemplo 3
float calculaDistancia(float Px1, float Px2, float Py1, float Py2){
    float a, b, c, d;
    a = Px1 - Px2;       //Encontra distância entre os pontos x1 e x2
    b = Px1 - Px2;       //Encontra a distância entre os pontos y1 e y2
    c = a + a + b * b;   //Faz a conta = a^2 = b^2
    d = sqrt(c);         //Acha raiz da equação
}
------------------------------------------------------------
//MODULARIZAÇÃO EM C
//Arquivos de cabeçalhos: Exemplo de cabeçalho math.h
//exemplo 1
*nome arquivo: main.c*
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "header.h" //PUXAR UM ARQUIVO PARA O PRINCIPAL
int main(){
    double n = 7.856;
    double arredonda_baixo = 0.0;
    double arredonda_cima = 0.0;
    
    printf("Valor de n = %f\n", n);
    
    arredonda_baixo = floor(n);
    printf("Valor para baixo: %f", n);
    
    arredonda_cima = ceil(n);
    printf("Valor para cima %f \n", arredonda_cima)
    
    getch();
    return 0;
}
------------------------------------------------------------
//ARQUIVOS CABEÇALHOS
//Exemplo 2.1

*Nome arquivo: funcoes.h*

void somar (int a, int b){
    int soma;
    
    soma = a + b;
    printf("A soma é %d", soma);
}

//Exemplo 2.2

#include <stdio.h>
#include "funcoes.h"

void somar(int a, int b);

int main() {
    int num1, num2;
    printf("Digite um número: \n");
    scanf("%d", &num1);
    
    printf("Digite outro número: \n");
    scanf("%d", num2);
    
    somar(num1, num2);
    return 0;
}
------------------------------------------------------------
//Exemplo 3.1
*Nome arquivo: funcoes.h*
typedef struct registro{
    int conteudo;
    struct registro *proximo;
} Item;
void inserir(Item **cabeca){
    Item *ItemAtual, *ItemNOVO;
    int numero;
    
    printf("Informe o Item: ");
    scanf("%d", &numero);
    
    if (*cabeca == NULL){
        (*cabeca = (Item *)malloc(sizeof(Item));
        (cabeca)->conteudo = numero;
        (*cabeca)->proximo = NULL;
    } else{
        ItemAtual = *cabeca;
        while(ItemAtual->proximo != NULL)
           ItemAtual = ItemAtual->proximo;
        ItemNOVO = (item *)malloc(sizeof(Item));
        ItemNOVO->conteudo = numero;
        ItemNOVO->proximo = NULL;
        ItemAtual->proximo = ItemNOVO;
    }
}
void imprimir(Item *ItemAtual){
    int i = 0;
    while (ItemAtual != NULL){
        printf("Item %d | ", ItemAtual->conteudo);
        ItemAtual = ItemAtual->proximo;
    }
}
//Exemplo 3.2 continuação no arquivo main
*nome arquivo: main.c*
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void inserir(Item **cabeca);
void imprimir(Item *ItemAtual);

int main(){
    int opcao;
    Item *cabeca = NULL;
    
    do {
        printf("\n--Opções--");
        printf("\n1 -> Inserir novo Item");
        printf("\n2 -> Imprimir os Item");
        printf("\n0 -> Sair:\n");
        
        switch(opcao) {
            case 1: inserir(&cabeca); break;
            case 2: imprimir(cabeca); break;
            break;
            default: printf("\n\n Opção Inválida");
        }
    }
}
------------------------------------------------------------
//Exemplo 4.1
*nome arquivo: main.c*
#include "stdio.h"
#include "data.h"

int main(){
    struct Data dt;
    int idade;
    
    printf("Informe a sua data de nascimento (dd/mm/aaaa): \n");
    scanf("%d%d%d", &dt.dia, &dt.mes, &dt.ano);
    
    printf("\nData Nascimento: %.2d%2.d%d. \n", dt.dia, dt.mes, dt.ano);
    
    printf("\nSua idade eh igual a %d anos.", calculaIdade(dt.ano));

}
//Exemplo 4.2 continuação
*nome arquivo: data.h*
struct Data {
    int dia;
    int mes;
    int ano;
};

int calculaIdade(int ano){
    int idade;
    return idade = 2022 - ano;
}
------------------------------------------------------------
//Exemplo 5.1
#include "stdio.h"
#include "data.h"

int main(){
    struct Data dt, hj;
    int idade;
    
    printf("Informe a sua data de nascimento (dd/mm/aaaa): \n");
    scanf("%d%d%d", &dt.dia, &dt.mes, &dt.ano);
    
    printf("\nData Nascimento: %.2d%2.d%d. \n", dt.dia, dt.mes, dt.ano);
    
    hj = dataHoje;
    
    printf("\nHoje eh dia %.2d%.2d%d. \n", hj.dia, hj.mes, hj.ano);

}
//Exemplo 5.2 continuação
*nome arquivo: data.h*

#include "time.h"

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Data dataHoje(void){
    struct Data data;
    
    time_t tempo;
    struct tm *hj;
    tempo = time(NULL);
    hj = localtime(&tempo);
    data.dia = hj->tm_mday;
    data.mes = hj->tm_mon + 1;
    data.ano = hj->tm_year + 1900;
    
    return(data);
}
------------------------------------------------------------
//Exemplo 6.1
#include <stdio.h>
#include <stdlib.h>
#include "soma.h"

int main(){
    int n;
    
    printf("m: ");
    scanf("%d", &n);
    
    printf("Soma de 1 ate %d: %d\n", n, soma(n));
    
    return 0;
}
//Exemplo 6.2 continuação
*nome arquivo: soma.h*

int soma(int n){
    if(n == 0)
     return 0;
    else
     return n + soma(n - 1);
}


























