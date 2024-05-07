#include <stdio.h>

void prime(int n1, int n2){
    int count, i, j;
    for (j = n1; j <= n2; j++){
        count = 0;
        for (i = 1; i <= j; i++){
            if (j % i == 0){
                count ++;
            }
        }
        if (count == 2){
            printf("%d, ",j);
        }
    }
}

int main(){
    int n1, n2;
    printf("List of prime number from: ");
    scanf("%d",&n1);
    printf("To: ");
    scanf("%d",&n2);
    prime(n1, n2);
    return 0;
}