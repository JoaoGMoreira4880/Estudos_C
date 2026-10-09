#include <stdio.h> 
#include <string.h>

struct data {
    int dia;
    int mes;
    int ano;
};
struct aluno{
    char nome [50];
    int idade;
    float nota;
    struct data nascimento;
};
int main (){
    struct aluno joao;
    strcpy(joao.nome, "João Gabriel");
    joao.idade = 19;
    joao.nota = 8.25;
    joao.nascimento.dia = 24;
    joao.nascimento.mes = 3;
    joao.nascimento.ano = 2007;

    printf("O aluno %s tem %d anos, nascido em %d / %d/ %d, tirou %.2f na prova", joao.nome, joao.idade, joao.nascimento.dia,  joao.nascimento.mes, joao.nascimento.ano, joao.nota);

    return 0;
}
