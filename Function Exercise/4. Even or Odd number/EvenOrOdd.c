#include <stdio.h>

void even(int x){
    printf("%d is even number.",x);
}

void odd(int x){
    printf("%d is odd number.",x);
}

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if (x%2 == 0){
        even(x);
    }else{
        odd(x);
    }
    return 0;
}