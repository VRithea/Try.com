#include <stdio.h>
//6
void print(int* array, int n){
    printf("The elements in the arrays after the insertions: ");
    for (int i = 0; i < n; i++){
        printf("%d, ", array[i]);
    }
}

void shift(int* array, int n){
    int pos, i;
    printf("Position to insert the element: ");
    scanf("%d",&pos);
    if (pos > n + 1 || pos < 0){
        printf("Invalid input.");
    }else{
        for (i = pos - 1; i < n; i++){
            array[i] = array[i + 1];
        }
    }
    n--;
    print(array, n);
}


void run(int n){
    int array[100], i;
    printf("Enter %d elements for the array:\n", n);
    for (i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    shift(array, n);
}

int main(){
    int n;
    printf("Input array size: ");
    scanf("%d",&n);
    run(n);
    return 0;
}