#include <stdio.h>

void assign10(void);
void assign20(void);

int a = 30; // 전역 변수 선언

int main(void)
{
    printf("함수 호출 전 a 값 : %d\n", a); // 전역 변수 a 출력

    assign10();
    assign20();

    printf("함수 호출 후 a값 : %d\n", a); // 전역 변수 a 출력

    return 0;
}

void assign10(void)
{
    a = 10; // 전역 변수 a에 10 대입
}

void assign20(void)
{
    int a; // 전역 변수와 같은 이름의 지역 변수 선언

    a = 20; // 전역 변수 a에 20 대입
}

/*

전역변수와 지역변수가 동시에 사용되면 반드시, 지역변수가 우선 적용된다.

전역변수와 지역변수의 이름이 같으면, 반드시 지역 변수를 먼저 사용한다!!!!!!!!

*/