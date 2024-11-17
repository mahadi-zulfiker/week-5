#include <stdio.h>

void shiftZerosToRight(int arr[], int n){
    int nonZeroIndex = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

    while(nonZeroIndex < n){
        arr[nonZeroIndex] = 0;
        nonZeroIndex++;
    }
}

int main(){
    int n;

    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    shiftZerosToRight(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}