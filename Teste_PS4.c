#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int n = 0;
    printf("Quantos números deseja guardar ?\n");
    scanf("%d", &n);

    int *p = malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Operação falhou !");
        return 1;
    }
    for (i = 0; i < n; i++)
    {
        *(p + i) = i * i;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(p + i));
    }
    free(p);
return 0;
}
