#include <stdio.h>

int main() {
    int price, vat_rate;

    printf("Nhập giá hàng: ");
    scanf("%d", &price);

    printf("Nhập VAT (%%): ");
    scanf("%d", &vat_rate);

    int vat_amount = price * vat_rate / 100;
    int total_price = price + vat_amount;

    printf("Tiền VAT: %d\n", vat_amount);
    printf("Tổng tiền: %d\n", total_price);

    return 0;
}