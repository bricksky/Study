#include <stdio.h>

int main()
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0)
    {
        printf("입력한 정수 %d는 2와 3의 배수입니다.", num);
    }
    else
    {
        printf("입력한 정수 %d는 2와 3의 배수가 아닙니다.", num);
    }

    return 0;
}