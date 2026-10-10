#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int meu_strlen (char *s){
    int contador = 0;
    while (*s != '\0')
    {
        contador++;
        s++;
    }
return contador;
}
void tirar_enter(char *s){
    int k = 0;
    int length = meu_strlen(s);
    for (k = 0; k < length; k++)
    {
        if (s[k] == '\n')
        {
            s[k] = '\0';
            break;
        }
    }
}
struct aluno
{
    char nome [50];
    int idade;
    float nota;
};
struct turma
{
    char nome_turma [50];
    struct aluno *alunos;
    int tamanho_turma; 
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
    int j = 0;
    int i = 0;
    struct turma turma1;
    turma1.alunos = NULL;
    printf("Como deseja chamar a turma ?\n");
    fgets(turma1.nome_turma, 50, stdin);
    tirar_enter(turma1.nome_turma);
    printf("Quantos alunos deseja cadastrar na turma ?\n");
    scanf("%d", &turma1.tamanho_turma);
    getchar();
    turma1.alunos = malloc(turma1.tamanho_turma * sizeof(struct aluno));
    if (turma1.alunos == NULL)
    {
        printf("Operação falhou !");
        return 1;
    }
    for (i = 0; i < turma1.tamanho_turma; i++)
    {
        char nome_main[50];
        int idade_main = 0;
        float nota_main = 0.0;
        printf("Digite o nome do aluno: \n");
        fgets(nome_main, 50, stdin);
        tirar_enter(nome_main);
        printf("Digite a idade do aluno: \n");
        scanf("%d", &idade_main);
        getchar();
        printf("Digite a nota do aluno: \n");
        scanf("%f", &nota_main);
        getchar();
        turma1.alunos[i] = criar_aluno(nome_main, idade_main, nota_main);
    }
    printf("As notas dos alunos da turma: %s, são: \n", turma1.nome_turma);
    for (i = 0; i < turma1.tamanho_turma; i++)
    {
        printf("%.2f\n", (turma1.alunos + i)->nota);
    }
    dar_bonus(turma1.alunos, turma1.tamanho_turma);
    printf("Após o bonus as notas são iguais a: \n");
    for (i = 0; i < turma1.tamanho_turma; i++)
    {
        printf("%.2f\n", (turma1.alunos + i)->nota);
    }
    free(turma1.alunos);
    turma1.alunos = NULL;
return 0;
}