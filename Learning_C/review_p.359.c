#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;

    printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
    {             // 블록 시작
        int temp; // temp 변수 선언

        temp = a;
        a = b; // a와 b는 5행에 선언된 변수
        b = temp;
    } // 블록 끝
    printf("교환 후 a와 b의 값: %d, %d\n", a, b);

    return 0;
}

/*

9행에서 int temp를 선언했고,
temp내에서의 a와 b는 main함수에서 선언된 int a와 int b와는 다른 값이다.
8~14행은 독립적인 공간으로 이해하면 된다.

*/