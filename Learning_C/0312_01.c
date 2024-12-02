#include <stdio.h>

int main()
{
    int num1, num2, num3, min;

    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // num1이 최소값인 경우
    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    // num2가 최소값인 경우
    else if (num2 <= num1 && num2 <= num3)
    {
        min = num2;
    }
    // num3이 최소값인 경우
    else
    {
        min = num3;
    }

    printf("최소값: %d\n", min);

    return 0;
}