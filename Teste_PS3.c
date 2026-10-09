#include <stdio.h>

int meu_strlen (char *s){
    int contador = 0;
    while (*s != '\0')
    {
        contador++;
        s++;
    }
return contador;
}
void meu_strcpy(char *destino, char *origem){
    while (*origem != '\0')
    {
        *destino = *origem;
        origem  = origem + 1;
        destino = destino + 1;
    }
    *destino = '\0';
}
int main(){
    char teste_origem[50] = "Abobora";
    char teste_destino[50];
    char minha_frase[50] = "João Gabriel Moreira";
    printf("A frase: %s, tem %d letras\n", minha_frase, meu_strlen(minha_frase));
    meu_strcpy(teste_destino, teste_origem);
    printf("%s\n", teste_origem);
    printf("%s\n", teste_destino);
    return 0;
}