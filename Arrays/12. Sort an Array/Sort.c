#include <stdio.h>
//12
void print(int* array, int n){
    for (int i = 0; i < n; i++){
        printf("%d, ", array[i]);
    }
}

void sort(int* array, int n){
    int temp;
    for(int i=0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    print(array, n);
}  

void run(int n){
    int array[100],i;
    printf("Enter %d elements for the first array:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    sort(array, n);
}

int main(){
    int n;
    printf("Input the array size: ");
    scanf("%d",&n);
    run(n);
    return 0;
}