#include <stdio.h>

int main(void)
{
    int a = 1;                 // 변수를 선언하고 1로 초기화
    int i;                     // 반복 횟수를 세기 위한 변수

    for (i = 0; i < 3; i++)    // i는 0으로 초기화 한 다음에, i가 3보다 작은 경우 동안 하나씩 증가함
    {
        a = a * 2;             // 초기값이 0이고, 차례로 계산하며 진행함
    }
    printf("a : %d\n", a);     // for문을 빠져 나오면 a값 출력

    return 0;
}                                          