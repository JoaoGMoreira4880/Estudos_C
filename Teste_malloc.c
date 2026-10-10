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
    struct aluno *p;
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
    int n = 0;
    printf("Quantos alunos deseja cadastrar na turma ?\n");
    scanf("%d", &n);
    getchar();
    struct aluno *p = malloc(n * sizeof(struct aluno));
    if (p == NULL)
    {
        printf("Operação falhou !");
        return 1;
    }
    for (i = 0; i < n; i++)
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
        p[i] = criar_aluno(nome_main, idade_main, nota_main);
    }
    printf("As notas dos alunos são: \n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f\n", (p + i)->nota);
    }
    dar_bonus(p, n);
    printf("Após o bonus as notas são: \n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f\n", (p + i)->nota);
    }
    free(p);
return 0;
}