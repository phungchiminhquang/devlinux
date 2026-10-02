#include <stdio.h>

int main(void){
    float dai, rong;

    printf("Nhập chiều dài: ");
    scanf("%f",&dai);

    printf("Nhập chiều rộng: ");
    scanf("%f",&rong);

    printf("Diện tích: %.2f\n",dai * rong);
    return 0;
}