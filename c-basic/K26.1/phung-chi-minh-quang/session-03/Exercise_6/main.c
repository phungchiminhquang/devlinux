/*Xác định số ngày trong tháng

Viết chương trình C:

Nhập vào tháng (1–12)
In ra số ngày của tháng đó
Tháng 1, 3, 5, 7, 8, 10, 12: 31 ngày
Tháng 4, 6, 9, 11: 30 ngày
Tháng 2: 28 ngày (không xét năm nhuận)
Nếu nhập sai → in lỗi*/

#include <stdio.h>

int main(void){
    int thang;

    printf("Nhập tháng (1-12): ");
    scanf("%d", &thang);

    switch(thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Tháng %d có 31 ngày\n", thang);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Tháng %d có 30 ngày\n", thang);
            break;
        case 2:
            printf("Tháng %d có 28 ngày\n", thang);
            break;
        default:
            printf("Lỗi: Tháng nhập vào không hợp lệ. Vui lòng nhập số từ 1 đến 12.\n");
    }

    return 0;
}