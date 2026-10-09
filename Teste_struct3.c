#include <stdio.h> 
#include <string.h>

struct aluno
{
    char nome [50];
    int idade;
    float nota;
};
struct aluno criar_aluno(char nome_temp [50], int idade_temp, float nota_temp){
    struct aluno temp;
    strcpy(temp.nome, nome_temp);
    temp.idade = idade_temp;
    temp.nota = nota_temp;

return temp;
}
int main(){

    struct aluno turma [3];
    int i = 0;
    char nomes [3][50];
    strcpy(nomes[0], "João");
    strcpy(nomes[1], "Rosa");
    strcpy(nomes[2], "Lucas");
    for (i = 0; i < 3; i++)
    {
        strcpy(turma[i].nome, nomes[i]);
        turma[i].idade = 19 + i;
        turma[i].nota = 7.21 + i;
    }
    float maior_nota = turma[0].nota;
    char vencedor [50];
    strcpy(vencedor, turma[0].nome);
    for (i = 0; i < 3; i++)
    {
        if (maior_nota < turma[i].nota)
        {
            maior_nota = turma[i].nota;
            strcpy(vencedor, turma[i].nome);
        }
    }
    printf("A maior nota é do %s e é de: %.2f",vencedor, maior_nota);
return 0;
}
    
  