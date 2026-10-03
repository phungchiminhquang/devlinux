//Kiểm tra số chẵn hay lẻ
#include <stdio.h>

int main(void){
    int n;

    printf("Nhập số: ");
    scanf("%d",&n);

    if(n % 2 == 0){
        printf("%d là số chẵn\n",n);
    }else{
        printf("%d là số lẻ\n",n);
    }
    return 0;
}