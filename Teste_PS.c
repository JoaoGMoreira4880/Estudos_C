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
void dar_bonus(struct aluno *turma, int tamanho){
    int i = 0;
    for (i = 0; i < tamanho; i++)
    {
        turma[i].nota = turma[i].nota + 1;
    }
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
        Turma_A.alunos_A[i].nota = 6.2 + ((i*3)/2);
    }
    printf("Os alunos da turma: %s, tem as notas: \n", Turma_A.nome_turma);
    for (i = 0; i < 3; i++)
    {
        printf("%.2f\n", Turma_A.alunos_A[i].nota);
    }
    dar_bonus(Turma_A.alunos_A, 3);
    printf("Os alunos da turma: %s, após ganharem os bonus, tem as notas: \n", Turma_A.nome_turma);
    for (i = 0; i < 3; i++)
    {
        printf("%.2f\n", Turma_A.alunos_A[i].nota);
    }
return 0;
}