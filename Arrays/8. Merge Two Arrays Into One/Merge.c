#include <stdio.h>
//8
void sort(int* Marray, int n){
    int temp;
    for(int i=0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(Marray[i] > Marray[j]){
                temp = Marray[i];
                Marray[i] = Marray[j];
                Marray[j] = temp;
            }
        }
    }
}   

void run(int* array1, int* array2, int n1, int n2){
    int in1 = 0, in2 = 0, n = n1 + n2, Marray[n], mergein;
    for (mergein = 0; mergein < n; mergein++){
        if(in1 >= n1 || in2 >= n2){
            break;
        }
        if (array1[in1] < array2[in2]){
            Marray[mergein] = array1[in1];
            in1 ++;
        }else{
            Marray[mergein] = array2[in2];
            in2 ++;
        }
    }
    while(in1 < n1){
        Marray[mergein] = array1[in1];
        mergein++;
        in1++;
    }
    while(in2 < n2){
        Marray[mergein] = array2[in2];
        mergein++;
        in2++;
    }
    sort(Marray, n);
    for (int i = 0; i < n; i++){
        printf("%d, ",Marray[i]);
    }
}

void scan(int n1, int n2){
    int array1[100], array2[100], i, n;
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++){
        scanf("%d",&array1[i]);
    }
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++){
        scanf("%d",&array2[i]);
    }
    run(array1, array2, n1, n2);
}

int main(){
    int n1, n2;
    printf("Input the first array size: ");
    scanf("%d",&n1);
    printf("Input the second array size: ");
    scanf("%d",&n2);
    scan(n1, n2);
    return 0;
}