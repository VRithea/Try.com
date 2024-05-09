#include <stdio.h>
//5
void print(int* array, int n){
    printf("The elements in the arrays after the insertions: ");
    for (int i = 0; i < n; i++){
        printf("%d, ", array[i]);
    }
}

void shift(int* array, int n){
    int ele, pos, i;
    printf("Enter the element to insert: ");
    scanf("%d",&ele);
    printf("Position to insert the element: ");
    scanf("%d",&pos);
    if (pos > n + 1 || pos < 0){
        printf("Invalid input.");
    }else{
        for (i = n; i > pos - 1; i--){
            array[i] = array[i - 1];
        }
    }
    array[pos - 1] = ele;
    n++;
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
    int n, i;
    printf("Input array size: ");
    scanf("%d",&n);
    run(n);
    return 0;
}