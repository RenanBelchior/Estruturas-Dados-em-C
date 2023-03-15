//Vetor em C: exemplo 3.
//Inserir dados do teclado no vetor e imprimir.

#include <stdio.h>

int main()
{
    int i;
    int vetor[3];
    
    for (i=0; i<3; i++){
        printf("Digite o %d elemento: \n", i);
        scanf ("%d", &vetor[i]);
    }
    for (i = 0; i<3; i++)
    printf("Vetor na posição %d é %d\n",i, vetor[i]);
}