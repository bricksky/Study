#include <stdio.h>

int main()
{
    int a;
    printf("시간을 입력해주세요 (1~24): ");
    scanf("%d", &a);
    if (a >= 1 && a <= 11)
    {
        printf("오전 %d시 입니다.", a);
    }
    else if (a >= 12 && a <= 24)
    {
        printf("오후 %d시 입니다.", a - 12);
    }
    else
    {
        printf("잘못된 입력입니다.");
    }
    return 0;
}