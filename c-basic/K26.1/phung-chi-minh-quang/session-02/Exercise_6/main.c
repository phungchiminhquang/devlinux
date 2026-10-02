//Exercise_6: Tính lương ròng sau thuế
#include <stdio.h>

int main(void){
    int salary, tax_rate, tax_amount, net_salary;
    
    printf("Nhập lương brutto: ");
    scanf("%d",&salary);

    printf("Nhập tỉ lệ thuế (%%): ");
    scanf("%d",&tax_rate);

    tax_amount = salary*tax_rate/100;
    printf("Tiền thuế: %d\n",tax_amount);

    net_salary = salary - tax_amount;
    printf("Lương ròng: %d\n",net_salary);

    return 0;
}