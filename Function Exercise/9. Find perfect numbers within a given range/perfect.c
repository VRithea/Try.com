#include <stdio.h>

void perfect(int n1, int n2){
    int i, icopy, j;
    for (i = n1; i <= n2; i++){
        icopy = i;
        int sum = 0;
        for (j=1; j<i; j++){
            if (i%j == 0){
                sum += j;
            }
        }
        if (i == sum){
            printf("%d, ",sum);
        }
    }
}

int main(){
    int n1,n2;
    printf("List of perfect numbers from: ");
    scanf("%d",&n1);
    printf("To: ");
    scanf("%d",&n2);
    perfect(n1, n2);
    return 0;
}