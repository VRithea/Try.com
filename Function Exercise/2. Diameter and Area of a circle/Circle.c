#include <stdio.h>
#define M_PI 3.14159265358979323846
float diameter(float rad){
    return rad*2;
}

float circumference(float rad){
    return 2*M_PI*rad;
}

float area(float rad){
    return M_PI*rad*rad;
}

int main(){
    float rad, dia, cir, ar;
    printf("Enter the radius: ");
    scanf("%f",&rad);
    dia = diameter(rad);
    cir = circumference(rad);
    ar = area(rad);
    printf("Diameter: %.2f\nCircumference: %.2f\nArea: %.2f",dia,cir,ar);
}
