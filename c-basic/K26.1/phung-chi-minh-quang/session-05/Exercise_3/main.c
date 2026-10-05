#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;

    return (a * b) / gcd(a, b); // Để cho đơn giản, ở đây KHÔNG giải quyết trường hợp (a*b) tạo ra số lớn hơn size của integer
}

int main(void)
{
    int a, b;

    printf("Nhập số a: ");
    scanf("%d", &a);

    printf("Nhập số b: ");
    scanf("%d", &b);

    printf("UCLN(%d, %d) = %d\n", a, b, gcd(a, b));
    printf("BCNN(%d, %d) = %d\n", a, b, lcm(a, b));

    return 0;
}