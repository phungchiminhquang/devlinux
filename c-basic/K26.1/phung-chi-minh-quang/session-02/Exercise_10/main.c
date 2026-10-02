#include <stdio.h>

int main(void){
    int tien_goc,lai_suat, so_nam ;
    int tien_lai;
    int tong_tien;
    
    printf("Nhập tiền gốc: ");
    scanf("%d",&tien_goc);

    printf("Nhập lãi suất (%%): ");
    scanf("%d",&lai_suat);

    printf("Nhập số năm: ");
    scanf("%d",&so_nam);

    tien_lai = tien_goc*lai_suat*so_nam/100;
    printf("Tiền lãi: %d\n",tien_lai);

    tong_tien = tien_goc + tien_lai;
    printf("Tổng tiền: %d\n",tong_tien);

    return 0;
}



