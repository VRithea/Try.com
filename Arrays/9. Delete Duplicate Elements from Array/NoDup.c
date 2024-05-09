#include <stdio.h>
//9
void print(int* array, int n){
    printf("The elements in the arrays: ");
    for (int i = 0; i < n; i++){
        printf("%d, ", array[i]);
    }
}

void delete(int* array, int n, int j){
    int k;
    for(k = j; k < n - 1; k++){
        array[k] = array[k + 1];
    }
}

void run(int n){
    int array[100], i, j;
    printf("Enter %d elements for the array:\n", n);
    for (i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (array[i] == array[j]){
                delete(array, n, j);
                n --;
                j --;
            }
        }
    }
    print(array, n);
}   

int main(){
    int n;
    printf("Input array size: ");
    scanf("%d",&n);
    run(n);
    return 0;
}