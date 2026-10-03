/*Xác định giá vé*/
#include <stdio.h>
#define NGAY_THUONG 1
#define NGAY_LE 2

#define TRE_EM 1
#define NGUOI_LON 2
#define NGUOI_GIA 3

#define GIA_VE_BASE 10000

int main(void)
{
    int loai_khach, loai_ngay;
    int gia_ve = GIA_VE_BASE;

    printf("Nhập loại hành khách (1=Trẻ em, 2=Người lớn, 3=Người già): ");
    scanf("%d", &loai_khach);

    printf("Nhập loại ngày (1=Thường, 2=Lễ): ");
    scanf("%d", &loai_ngay);

    // Kiểm tra loai_ngay để tính gia_ve
    if (loai_ngay == NGAY_LE)
    {
        gia_ve = (int)(gia_ve * 1.5); // Giá vé tăng 50%
    }

    // Kiểm tra loai_khach để tính gia_ve
    switch (loai_khach)
    {
    case TRE_EM:
        gia_ve = (int)(gia_ve * 0.7); // Giá vé giảm 30%
        break;
    case NGUOI_LON:
        // Giá vé không giảm
        break;
    case NGUOI_GIA:
        gia_ve = (int)(gia_ve * 0.8); // Giá vé giảm 20%
        break;
    default:
        printf("Lỗi: Loại hành khách không hợp lệ\n");
        return 0;
        break;
    }

    printf("Giá vé: %d đ\n", gia_ve);

    return 0;
}