//Vetor em C: exemplo 5.
//Inserir dados da matriz abaixo pelo teclado e imprimir

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d | ", matriz[i][j]);
        }
        printf("\n");
    }
}