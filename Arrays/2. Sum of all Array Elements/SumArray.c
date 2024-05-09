#include <stdio.h>
//2
void run(int n){
    int array[100], i, sum = 0;
    printf("Enter %d elements for the array:\n", n);
    for (i=0; i<n; i++){
        scanf("%d",&array[i]);
        sum += array[i];
    }
    printf("Sum of the elements of the array = %d", sum);
}

int main(){
    int n;
    printf("Input array size: ");
    scanf("%d",&n);
    run(n);
    return 0;
}