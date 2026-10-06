// Đếm số lần xuất hiện
#include<stdio.h>

int main(void){
    int n;
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &n);

    int elements[n];
    printf("Nhập %d phần tử: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &elements[i]);
    }

    int x;
    printf("Nhập số cần tìm: ");
    scanf("%d", &x);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (elements[i] == x)
        {
            count++;
        }
    }

    printf("Số %d xuất hiện %d lần trong mảng\n", x, count);
    return 0;
}