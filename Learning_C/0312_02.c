#include <stdio.h>

int main()
{
    int a, b, c;
    printf("나의 생년? ");
    scanf("%d", &a);
    printf("희망연도? ");
    scanf("%d", &b);

    c = b - a;
    printf("%d의 나이는 %d입니다.\n", b, c);

    return 0;
}