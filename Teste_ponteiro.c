#include <stdio.h> 
#include <string.h>

void swap (int *a, int *b){
    int p;
    p = *a;
    *a = *b;
    *b = p;
}
int main (){
    int a = 10;
    int b = 15;
    printf("A = %d e B = %d\n", a, b);
    swap(&a, &b);
    printf("A = %d e B = %d\n", a, b);
return 0;
}