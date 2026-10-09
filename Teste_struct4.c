#include <stdio.h> 
#include <string.h>

struct aluno
{
    char nome [50];
    int idade;
    float nota;
};
struct turma
{
    char nome_turma [50];
    struct aluno alunos_A [3];
};

struct aluno criar_aluno(char nome_temp [50], int idade_temp, float nota_temp){
    struct aluno temp;
    strcpy(temp.nome, nome_temp);
    temp.idade = idade_temp;
    temp.nota = nota_temp;

return temp;
}
int main(){
    int i = 0;
    char nomes [3][50];
    struct turma Turma_A;
    strcpy(Turma_A.nome_turma, "Turma_A");
    strcpy(nomes[0], "Bernardo");
    strcpy(nomes[1], "Lucia");
    strcpy(nomes[2], "Julia");
    for (i = 0; i < 3; i++)
    {
        strcpy(Turma_A.alunos_A[i].nome, nomes[i]);
        Turma_A.alunos_A[i].idade = 19 + (i*2);
        Turma_A.alunos_A[i].nota = 4.0 + (i* (i/2));
    }
    printf("Os alunos: \n");
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", Turma_A.alunos_A[i].nome);
    }
    printf("São da turma: %s",Turma_A.nome_turma);
return 0;
}