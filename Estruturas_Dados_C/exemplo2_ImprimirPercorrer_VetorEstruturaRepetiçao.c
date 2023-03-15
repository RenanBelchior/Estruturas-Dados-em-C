//Vetor em C: exemplo 2.
//Imprimir/Percorrendo o vetor com estrutura de repetição.

#include <stdio.h>

int main()
{
    int i;
    int vetor[3];
    vetor[0] = 25;
    vetor[1] = 2;
    vetor[2] = 14;
    
    for (i = 0; i<3; i++)
      printf("O valor de vetor 0 é %d\n", vetor[i]);
}