#include <stdio.h>

int findMaxRecursively(int arr[], int n){
    if(n == 1){
        return arr[0];
    }

    int maxInRest = findMaxRecursively(arr, n - 1);

    return(arr[n - 1] > maxInRest) ? arr[n - 1] : maxInRest;
}

int main(){
    int n;

    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int maxValue = findMaxRecursively(arr, n);

    printf("%d\n", maxValue);

    return 0;
}