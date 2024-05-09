#include <stdio.h>
//10
void array_out(int* array, int  n){
    int i;
    printf("All the %d elements in the arrays are: " ,n);
    for (i = n; i > 0; i--){
        printf("%d, ",array[i - 1]);
    }        
}

void run(int n){
    int array[100], i;
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    array_out(array, n);
}

int main(){
    int n;
    printf("Input array size: ");
    scanf("%d",&n);
    run(n);
    return 0;
}