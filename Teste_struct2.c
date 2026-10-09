#include <stdio.h> 
#include <string.h>

struct aluno {
    char nome [50];
    int idade;
    float nota;
};

int main (){
    struct aluno turma[3];
    int i = 0;
    char nomes [3][50];

    strcpy(nomes[0], "Maria");
    strcpy(nomes[1], "Joao");
    strcpy(nomes[2], "Davi");

    for (i = 0; i < 3; i++)
    {
        strcpy(turma[i].nome, nomes[i]);
        turma[i].idade = 20 + i;
        turma[i].nota = 5.30 + i;
    }
    printf("O aluno: %s tirou %.2f e tinha a %d anos, já o aluno: %s tirou %.2f e tinha %d anos.",turma[0].nome, turma[0].nota, turma[0].idade, turma[1].nome, turma[1].nota, turma[1].idade);
return 0;
}