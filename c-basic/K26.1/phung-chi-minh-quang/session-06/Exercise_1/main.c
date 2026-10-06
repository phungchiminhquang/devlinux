//Tổng và trung bình cộng
#include <stdio.h>

int main (void){
    int n;
    int sum = 0;
    float average;

    printf("Nhập số lượng phần tử: ");
    scanf("%d",&n);

    int elements[n];
    printf("Nhập %d phần tử: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &elements[i]);
        sum += elements[i];
    }

    average = (float)sum / n;

    printf("Tổng: %d\n", sum);
    printf("Trung bình cộng: %.2f\n", average);

    return 0;
}