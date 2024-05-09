#include <stdio.h>
//4
void print(int* arrayZin, int* arrayI, int n){
    int i;
    printf("Arrays Zin: ");
    for (i = 0; i < n; i++){
        printf("%d, ",arrayZin[i]);
    }
    printf("\nArrays Fake: ");
    for (i = 0; i < n; i++){
        printf("%d, ",arrayI[i]);
    }
}

void copy(int* arrayZin, int n){
    int arrayI[n], i;
    for (i = 0; i < n; i++){
    arrayI[i] = arrayZin[i];
    }
    print(arrayZin, arrayI, n);
}

void run(int n){
    int arrayZin[100], i;
    printf("Enter %d elements for the array:\n", n);
    for (i=0; i<n; i++){
        scanf("%d",&arrayZin[i]);
    }
    copy(arrayZin, n);
}

int main(){
    int n;
    printf("Input array size: ");
    scanf("%d",&n);
    run(n);
    return 0;
}