#include <stdio.h>
void star1(){
    int i,j;
        for (i=1;i<=5;i++){
            for (j=1;j<=5;j++){
                printf("* ");
            }
            printf("\n");
        }   
}

void star2(){
    int i,j;
    for (i=1;i<=5;i++){
        for (j=1;j<=5;j++){
            if (i==1||i==5||j==1||j==5){
                printf("* ");
            }else{
                printf("  ");
            }    
        }
        printf("\n");
    }  
}

void star3(){
    int i,j;
    for (i=1;i<=5;i++){
        for (j=1;j<=5;j++){
            if (i==2&&j==3){
                printf("  ");
            }else if (i==3&&j==2){
                printf("  ");
            }else if (i==3&&j==4){
                printf("  ");
            }else if (i==4&&j==3){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
}

void star4(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=5-i;k++){
            printf("  ");
        }
        for (j=1;j<=5;j++){
            printf("* ");
        }
        printf("\n");
    }   
}

void star5(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=5-i;k++){
            printf("  ");
        }
        for (j=1;j<=5;j++){
            if (i==1||i==5||j==1||j==5){
                printf("* ");
            }else{
                printf("  ");
            }    
        }
        printf("\n");
    }   
}

void star6(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<i;k++){
            printf("  ");
        }
        for (j=1;j<=5;j++){
            printf("* ");
        }
        printf("\n");
    }  
}

void star7(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<i;k++){
            printf("  ");
        }
        for (j=1;j<=5;j++){
            if (i==1||i==5||j==1||j==5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void star8(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void star9(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (j=1;j<=i;j++){
            if (i==1 || i==2 || i==5){
                printf("* ");
            }else if (i==3 && j==2){
                printf("  ");
            }else if (i==4 && j==2){
                printf("  ");
            }else if (i==4 && j==3){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
}

void star10(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=5-i;k++){
            printf("  ");
        }
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    } 
}

void star11(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=5-i;k++){
            printf("  ");
        }
        for (j=1;j<=i;j++){
            if (i==1 || i==2 || i==5){
                printf("* ");
            }else if (i==3 && j==2){
                printf("  ");
            }else if (i==4 && j==2){
                printf("  ");
            }else if (i==4 && j==3){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
}

void star12(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (j=5;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
}

void star13(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=i-1;k++){
            printf("  ");
        }
        for (j=5;j>=i;j--){
            if (i==1 || i==4 || i==5){
                printf("* ");
            }else if (i==3 && j==4){
                printf("  ");
            }else if (i==2 && j==3){
                printf("  ");
            }else if (i==2 && j==4){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    } 
}

void star14(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=5-i;k++){
            printf("  ");
        }
        for (j=1;j<i*2;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void star15(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=5-i;k++){
            printf("  ");
        }
        for (j=1;j<i*2;j++){
            if (j==1 || j==i*2-1){
                printf("* ");
            }else if(i==5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void star16(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=i-1;k++){
            printf("  ");
        }
        for (j=5*2+1;j>i*2;j--){
            printf("* ");
        }
        printf("\n");
    }
}

void star17(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=i-1;k++){
            printf("  ");
        }
        for (j=5*2+1;j>i*2;j--){
            if (j==5*2+1 || j==i*2+1){
                printf("* ");
            }else if(i==1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void star18(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=1;i<=4;i++){
        for (j=4;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
}

void star19(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=5-i;k++){
            printf("  ");
        }
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=1;i<=4;i++){
        for (k=1;k<=i;k++){
            printf("  ");
        }
        for (j=4;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
}

void star20(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=5-i;k++){
            printf("  ");
        }
        for (j=1;j<i*2;j++){
            printf("* ");
        }
        printf("\n");
    }   
    for (i=1;i<=4;i++){
        for (k=1;k<=i;k++){
            printf("  ");
        }
        for (j=5*2;j>i*2+1;j--){
            printf("* ");
        }
        printf("\n");
    }
}

void star21(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (j=1;j<=10;j++){
            if (i==1){
                printf("* ");
            }else if (j>6-i && j<5+i){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
    for (i=1;i<=5;i++){
        for (j=10;j>=1;j--){
            if (i==5){
                printf("* ");
            }else if (j<11-i && j>i){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
}

void star22(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=1;k<=i-1;k++){
            printf("    ");
        }
        for (j=5;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    } 
    for (i=1;i<=4;i++){
        for (k=1;k<=4-i;k++){
            printf("    ");
        }
        for (j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");    
    }
}

void star23(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (k=5;k>i;k--){
            printf("  ");
        }
        for (j=5;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }  
    for (i=1;i<=4;i++){
        for (k=0;k<i;k++){
            printf("  ");
        }
        for (j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void star24(){
    int i,j,k;
    for (i=1;i<=9;i++){
        for (k=1;k<=9;k++){
            if (k==5 || i ==5 ){
                printf("+ ");
            }else{
                printf("  ");
            }  
        }
        printf("\n");
    }
}

void star25(){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (j=1;j<=9;j++){
            if (j==i || j==10-i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i=1;i<=4;i++){
        for(j=1;j<=9;j++){
            if (j==5-i || j==5+i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void star26(){
    int i,j,k;
    for (i=1;i<=9;i++){
        for (j=1;j<=5;j++){
            if (i==1 && j==1){
                printf("  ");
            }else if (i==1 && j==5){
                printf("  ");
            }else if (i==5 && j==1){
                printf("  ");
            }else if (i==5 && j==5){
                printf("  ");
            }else if (i==9 && j==1){
                printf("  ");
            }else if (i==9 && j==5){
                printf("  ");
            }else if (i==1||i==5||i==9){
                printf("* ");
            }else if (j==1||j==5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void star27(){
    int i,j,k;
    for (i=5;i<=7;i++){
        for (k=4;k<=10-i;k++){
            printf("  ");
        }
        for (j=5;j<i*2;j++){
            printf("* ");
        }
        for (k=1;k<=1;k++){
            printf("  ");
        }
        for (k=4;k<=10-i;k++){
            printf("    ");
        }
        for (j=5;j<i*2;j++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=1;i<=10;i++){
        for (k=1;k<=i-1;k++){
            printf("  ");
        }
        for (j=10*2+1;j>i*2;j--){
            printf("* ");
        }
        printf("\n");
    }
}

void star28(){
    int i,j,k;
    for (i=5;i<=7;i++){
        for (k=4;k<=10-i;k++){
            printf("  ");
        }
        for (j=5;j<i*2;j++){
            printf("* ");
        }
        for (k=1;k<=1;k++){
            printf("  ");
        }
        for (k=4;k<=10-i;k++){
            printf("    ");
        }
        for (j=5;j<i*2;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf ("* * * * * C A D T   C O D E * * * * *\n");
    for (i=1;i<=9;i++){
        for (k=1;k<=i;k++){
            printf("  ");
        }
        for (j=9*2+1;j>i*2;j--){
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    printf("1:\n");
    star1();
    printf("2:\n");
    star2();
    printf("3:\n");
    star3();
    printf("4:\n");
    star4();
    printf("5:\n");
    star5();
    printf("6:\n");
    star6();
    printf("7:\n");
    star7();
    printf("8\n");
    star8();
    printf("9:\n");
    star9();
    printf("10:\n");
    star10();
    printf("11:\n");
    star11();
    printf("12:\n");
    star12();
    printf("13:\n");
    star13();
    printf("14:\n");
    star14();
    printf("15:\n");
    star15();
    printf("16:\n");
    star16();
    printf("17:\n");
    star17();
    printf("18:\n");
    star18();
    printf("19:\n");
    star19();
    printf("20:\n");
    star20();
    printf("21:\n");
    star21();
    printf("22:\n");
    star22();
    printf("23:\n");
    star23();
    printf("24:\n");
    star24();
    printf("25:\n");
    star25();
    printf("26:\n");
    star26();
    printf("27:\n");
    star27();
    printf("28:\n");
    star28();
}