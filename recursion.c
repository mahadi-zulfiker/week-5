#include <stdio.h>

void printMessage(int N){
    if(N == 0){
        return;
    }

    printf("I love Recursion\n");

    printMessage(N - 1);
}

int main(){
    int N;
    scanf("%d", &N);

    printMessage(N);
}