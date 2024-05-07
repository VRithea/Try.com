#include <stdio.h>

int cube(int x){
    printf("Enter a number: ");
    scanf("%d",&x);
    return x*x*x;
}

int main(){
    int x, cb = cube(x);
    printf("%d",cb);
    return 0;
}