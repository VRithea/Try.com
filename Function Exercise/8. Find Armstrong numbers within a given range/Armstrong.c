#include <stdio.h>
#include <math.h>

void armstrong(int n1, int n2){
    for (int i = n1; i <= n2; i++){
        int ncopy = i, sum = 0, d = 0, r = 0;
        while (ncopy != 0){
            ncopy = ncopy / 10;
            d++;
        }
        ncopy = i;
        while (ncopy != 0){
            r = ncopy % 10;
            sum = sum + round(pow(r,d));
            ncopy = ncopy / 10;
        }
        if (i == sum){
            printf("%d, ",sum);
        }
    }
}

int main(){
    int n1,n2;
    printf("List of armstrong number from: ");
    scanf("%d",&n1);
    printf("To: ");
    scanf("%d",&n2);
    armstrong(n1, n2);
    return 0;
}