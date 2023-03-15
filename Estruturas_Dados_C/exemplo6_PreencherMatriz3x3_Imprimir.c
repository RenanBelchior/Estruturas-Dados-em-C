//Vetor em C: exemplo 6.
//Preencher uma matriz identidade 3x3 e depois imprimir

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(i == j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }
}