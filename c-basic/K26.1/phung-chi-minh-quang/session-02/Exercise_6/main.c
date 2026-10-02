#include <stdio.h>

int main(void){
    int luong,tl_thue;
    int tien_thue;
    int luong_rong;
    
    printf("Nhập lương brutto: ");
    scanf("%d",&luong);

    printf("Nhập tỉ lệ thuế (%%): ");
    scanf("%d",&tl_thue);

    tien_thue = luong*tl_thue/100;
    printf("Tiền thuế: %d\n",tien_thue);

    luong_rong = luong - tien_thue;
    printf("Lương ròng: %d\n",luong_rong);

    return 0;
}