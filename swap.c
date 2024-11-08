#include <stdio.h>

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);

    swap(&X, &Y);

    printf("%d %d", X, Y);
}