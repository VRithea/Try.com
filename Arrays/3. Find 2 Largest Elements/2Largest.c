#include <stdio.h>
//3
void check(int* array, int n){
    int max1 = 0, max2 = 0, i;
    for (i = 0; i < n; i++){
        if (array[i] > max1){
            max2 = max1;
            max1 = array[i];
        }else if (array[i] > max2 && array[i] < max1){
            max2 = array[i];
        }
    }
    printf("The first largest element is %d.\nThe second largest element is %d.",max1, max2);
}

void run(int n){
    int array[100], i;
    printf("Enter %d elements for the array:\n", n);
    for (i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    check(array, n);
}

int main(){
    int n;
    printf("Input array size: ");
    scanf("%d",&n);
    run(n);
    return 0;
}