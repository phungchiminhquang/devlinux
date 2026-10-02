#include <stdio.h>
#define PI 3.14159F

int main(void){
    float r;

    printf("Nhập bán kính: ");
    scanf("%f",&r);

    printf("Chu vi: %.2f\n", 2*PI*r );
    printf("Diện tích: %.2f\n", PI*r*r);
    return 0;
}