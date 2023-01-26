#include <stdio.h>

void assign(void);

int main(void)
{
    auto int a = 0;

    assign();
    printf("main 함수 a: %d\n", a);

    return 0;
}

void assign(void)
{
    int a;

    a = 10;
    printf("assign 함수 a: %d\n", a);
}

/*

지금까지 사용한 변수는 지역변수이다.
지역 변수는 일정 지역 내에서만 사용하는 변수이다.

auto int a=o; 이런식으로 원래 작성되지만, auto는 생략할 수 있다.

*/