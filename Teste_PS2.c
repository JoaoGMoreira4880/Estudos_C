#include <stdio.h>

void imprimir(int *v, int tamanho){
    int i = 0;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\n", *(v + i));
    }
}
void inverter (int *v, int tamanho){
    int i = 0;
    int temp;
    for (i = 0; i < (tamanho/2); i++)
    {
        temp = *(v + i);
        *(v + i) = *(v + ((tamanho - 1) - i));
        *(v + ((tamanho - 1) - i)) = temp;
    }
}
int main (){
    int i = 0;
    int v[6] = {10, 20, 30, 40, 50, 60};
    imprimir(v, 6);
    inverter(v, 6);
    printf("--------------------------------\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d\n", *(v + i));
    }
return 0;
}