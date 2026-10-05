#include <stdio.h>

void factorize(int n)
{

    printf("Các thừa số nguyên tố: ");

    // Tuân theo nguyên tắc tìm thừa số từ các ước bé nhất, dừng khi i*i > n
    // Bắt đầu vòng lặp xét từng số từ ước bằng 2, cũng là số nguyên tố bé nhất
    for (int i = 2; i * i <= n;)
    {
        if (n % i == 0)
        {
            // i là một thừa số nguyên tố
            printf("%d", i);
            n = n / i;

            // printf dấu x giữa các thừa số nguyên tố
            if (n > 1)
                printf(" x ");
        }
        else
            i++; // i không phải thừa số nguyên tố, xét số nguyên tố tiếp theo

        if (i * i > n && n > 1) // Nếu i*i > n và n vẫn còn lớn hơn 1, thì n là một thừa số nguyên tố
        {
            printf("%d\n", n);
            break;
        }
    }
    printf("\n");
}

int main(void)
{
    int n;

    printf("Nhập số: ");
    scanf("%d", &n);

    factorize(n);

    return 0;
}