#include <stdio.h>

void printNumbers(int N){
    if(N == 1){
        printf("1");
        return;
    }

    printf("%d ", N);

    printNumbers(N - 1);
    
}

int main(){
    int N;
    scanf("%d", &N);

    printNumbers(N);
}