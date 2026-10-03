/*Kiểm tra đủ tuổi thi bằng lái*/
#include <stdio.h>

int main(void){
    int tuoi;

    printf("Nhập tuổi: ");
    scanf("%d", &tuoi);

    if (tuoi >= 18) {
        printf("Bạn đủ điều kiện thi bằng lái xe máy\n");
    } else {
        printf("Bạn không đủ điều kiện thi bằng lái xe máy\n");
    }

    return 0;
}