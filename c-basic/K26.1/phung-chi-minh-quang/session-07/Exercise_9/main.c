// Chuỗi ký tự cơ bản với con trỏ
#include <stdio.h>

#define STR_MAX_LENGTH 100

void swap(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int length(char *s)
{
    int count = 0;
    char *ptr = s;

    while (*ptr != '\0')
    {
        ptr++;
        count++;
    }
    return count;
}

void reverseString(char *s)
{
    int s_length = length(s);
    char *left = s;
    char *right = s + s_length - 1;

    while (left < right)
    {
        swap(left, right);
        left++;
        right--;
    }
}

int main(void)
{
    char s[STR_MAX_LENGTH];

    // Nhập từng kí tự cho đến khi gặp Enter (\n)
    printf("Nhập chuỗi: ");
    for (int i = 0; i < STR_MAX_LENGTH; i++)
    {
        scanf("%c", &s[i]);
        if (s[i] == '\n')
        {
            // Thay kí tự Enter \n bằng kí tự kết thúc chuỗi \0
            s[i] = '\0';
            break;
        }
    }

    printf("Độ dài chuỗi: %d\n", length(s));

    printf("Chuỗi ban đầu: ");
    printf("%s", s);
    printf("\n");

    reverseString(s);

    printf("Chuỗi đảo: ");
    printf("%s", s);
    printf("\n");

    return 0;
}