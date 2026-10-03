/*Máy tính đơn giản*/
#include <stdio.h>

int main(void)
{
    float a, b;
    char c;

    printf("Nhập số 1: ");
    scanf("%f", &a);

    printf("Nhập toán tử: ");
    scanf(" %c", &c); // Khoảng trắng trước %c ra lệnh cho scanf tự động bỏ qua các kí tự đặc biệt như space hoặc kí tự \n từ nút Enter

    printf("Nhập số 2: ");
    scanf("%f", &b);

    // Để giữ sự đơn giản thì ở đây không check "khoảng trắng trong nhập liệu" hoặc chia cho 0

    switch (c)
    {
    case '+':
        printf("Kết quả: %.2f\n", a + b);
        break;
    case '-':
        printf("Kết quả: %.2f\n", a - b);
        break;
    case '*':
        printf("Kết quả: %.2f\n", a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Lỗi: Không thể chia cho 0\n");
            break;
        }
        printf("Kết quả: %.2f\n", a / b);
        break;
    default:
        printf("Lỗi: Toán tử không hợp lệ\n");
        break;
    }

    return 0;
}