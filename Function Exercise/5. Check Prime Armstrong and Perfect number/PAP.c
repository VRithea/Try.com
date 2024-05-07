#include <stdio.h>
#include <math.h>

void prime(int m, int n, int i){
    for (i = 1; i <= n; i++){
        if (n % i == 0){
            m++;
        }
    }
    if (m == 2){
        printf("%d is prime number.",n);
    }else{
        printf("%d is not prime number.",n);
    }
}

void armstrong(int n, int ncopy, int d, int sum, int r){
    ncopy = n;
    while (ncopy != 0){
        ncopy /= 10;
        d++;
    }
    ncopy = n;
    while (ncopy != 0){
        r = ncopy % 10;
        sum += round(pow(r,d));
        ncopy /= 10;
    }
    if (sum == n){
        printf("\n%d is armstrong number.",n);
    }else{
        printf("\n%d is not armstrong number.",n);
    }
}

void perfect(int i, int n, int sum){
    for (i=1; i<n; i++){
        if (n%i == 0){
            sum += i;
        }
    }
    if (n == sum){
        printf("\n%d is perfect number.",n);
    }else{
        printf("\n%d is not perfect number.",n);
    }
}

int main(){
    int m = 0, n, i;
    int d, ncopy, sum, r;
    printf("Enter N: ");
    scanf("%d",&n);
    prime(m, n, i);
    armstrong(n, ncopy, d, sum, r);
    perfect(i, n, sum);
}