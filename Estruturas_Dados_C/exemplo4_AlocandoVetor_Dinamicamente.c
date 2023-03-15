//Vetor em C: exemplo 4.
//Alocando um vetor dinamicamente.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *v;
    v = (int*)malloc(sizeof(int)*5);
    
    v[0] = 10;
    v[1] = 11;
    v[2] = 12;
    v[3] = 13;
    v[4] = 14;
    
    for(i=0; i < 5; i++)
      printf("v[%d]: %d\n", i, v[i]);
      
      printf("Endereço de 'v': %p", v);
      free(v);
}