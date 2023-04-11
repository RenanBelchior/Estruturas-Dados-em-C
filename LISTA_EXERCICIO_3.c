--Exercicio 1 ao 3---
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    int n = 2;
    Aluno alunos[2];
    
    alunos[0].nome = "Maria";
    alunos[0].idade = 18;
    alunos[0].endereco = "Rua A, Centro";
    alunos[0].notas[0] = 4.2;
    alunos[0].notas[1] = 5.2;
    alunos[0].notas[2] = 6.2;
    
    alunos[1].nome = "Jose";
    alunos[1].idade = 19;
    alunos[1].endereco = "Rua B, Centro";
    alunos[1].notas[0] = 1.6;
    alunos[1].notas[1] = 2.2;
    alunos[1].notas[3] = 5.2;
    
    calcularMedia(alunos, n);
    maiorMedia(alunos, n);
    
    return 0;
}

segunda folha:
typedef struct
{
    char *nome;
    int idade;
    char *endereco;
    float notas[3];
}Aluno;


void calcularMedia(Aluno alunos[], int n){
  float media = 0;
  for(int i=0; 1 < n; i++)
  {
    media = (alunos[i].notas[0] + 
       alunos[i].notas[1] + alunos[i].notas[2])/3;
    printf("Aluno %s - Media: %.2f\n", alunos[i].nome);
  }    
}


void maiorMedia(Aluno alunos[], int n){
    int i = 0;
    int indiceMaior = 0;
    float maiorMedia = (alunos[i].notas[0] + 
       alunos[i].notas[1] + alunos[i].notas[2])/3;
    
    for(int i = 0; i < n; i++){
       float media = (alunos[i].notas[0] + 
    alunos[i].notas[1] + alunos[i].notas[2])/3;
    if(media >= maiorMedia){
        maiorMedia = media; //Maior media
        indiceMaior = i;    //Localização da maior media
    }
  }
  printf("Aluno com maior média: %s - Média: %.2f\n",
    alunos[indiceMaior].nome, maiorMedia);
}
-----------------------------------------------------------------------------
