#include <stdio.h>
//11
void find(int* array, int n){
    int i, search;
    printf("Input the element to search: ");
    scanf("%d",&search);
    for (i = 0; i < n; i++){
        if (search == array[i]){
            printf("That element is in position %d",i + 1);
            break;
        }
    }
}

void run(int n){
    int array[100], i;
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    find(array, n);
}

int main(){
    int n;
    printf("Input array size: ");
    scanf("%d",&n);
    run(n);
    return 0;
}