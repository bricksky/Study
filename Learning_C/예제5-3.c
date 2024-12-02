#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;

    if (a > 0)              // 조건식1: a가 0보다 크면 b에 1대입
    {
        b = 1;
    }
    else if (a == 0)        // 조건식2: a가 0보다 크지 않고 a가 0이면 b에 2대입
    {
        b = 2;
    }
    else                    // a가 0보다 크지 않고 0도 아니면 b에 3대입
    {
        b = 3;
    }

    printf("b : %d\n", b);  // if문으로 결정된 b값 출력

    return 0;
}