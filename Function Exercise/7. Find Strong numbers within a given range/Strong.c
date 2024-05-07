#include <stdio.h>

void strong(int n1, int n2){
    int i, j, jcopy, r;
    for (j = n1; j <= n2; j++){
        int sum=0;
        jcopy = j;
        while (jcopy != 0){
            int fact = 1;
            r = jcopy % 10;
            for (i = 1; i <= r; i++){
                fact *= i;
            }
            sum += fact;
            jcopy /= 10;
        }
        if (j==sum){
            printf("%d, ",sum);
        }
    }
}

int main(){
    int n1,n2;
    printf("List of strong number from: ");
    scanf("%d",&n1);
    printf("To: ");
    scanf("%d",&n2);
    strong(n1,n2);
    return 0;
}