#include <stdio.h>
//13
void print(int* array, int n){
    for (int i = 0; i < n; i++){
        printf("%d, ", array[i]);
    }
}

void run(int n){
    int array[100], i, j, rotate, first;
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    printf("Emter number of times to rotate: ");
    scanf("%d",&rotate);
    printf("The array before rotate: ");
    print(array, n);
    for (j = 1; j <= rotate; j++){
        first = array[0];
        for (i = 0; i < n - 1; i++){
            array[i] = array[i + 1];
        }
        array[n-1] = first;
    }
    printf("\n\n\nThe array after rotate: ");
    print(array, n);
}

int main(){
    int n;
    printf("Input array size: ");
    scanf("%d",&n);
    run(n);
    return 0;
}