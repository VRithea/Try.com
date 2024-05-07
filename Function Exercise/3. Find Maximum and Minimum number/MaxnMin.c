#include <stdio.h>

void MnMa(int x, int y){
    printf("Maximum: %d\n",x);
    printf("Minimum: %d",y);
}

void MnMb(int x, int y){
    printf("Maximum: %d\n",y);
    printf("Minimum: %d",x);
}

int main(){
    int x, y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    if (x > y){
        MnMa(x, y);
    }else if (y > x){
        MnMb(x, y);
    }else{
        printf("Both numbers are equal");
    }
    return 0;
}