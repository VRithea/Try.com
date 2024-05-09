#include <stdio.h>
//7
void print(int* array, int* fre, int n){
    int i;
    printf("\nFrequency of all elements of array : \n");
    for(i = 0; i < n; i++){
        if(fre[i] != 0){
            printf("%d occurs %d times\n", array[i], fre[i]);
        }
    }
}

void check(int* array,int* fre, int n){
    int i, j, count;
    for(i = 0; i < n; i++){
        count = 1;
        for(j = i + 1; j < n; j++){
            if(array[i] == array[j])
            {
                count++;
                fre[j] = 0;
            }
        }
        if(fre[i] != 0){
            fre[i] = count;
        }
    }
    print(array, fre, n);
}

void run(int n){
    int array[100], fre[100], i;
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d",&array[i]);
        fre[i] = -1;
    }
    check(array, fre, n);
}

int main(){
    int n;
    printf("Input array size: ");
    scanf("%d",&n);
    run(n);
    return 0;   
}