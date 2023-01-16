#include <stdio.h>

void print_char(char ch, int count); // 함수 선언

int main(void)
{
    print_char('@', 5); // 문자와 숫자를 주고 함수 호출

    return 0;
}

void print_char(char ch, int count) // 매개변수는 있으나 변환형은 없다
{
    int i;

    for (i = 0; i < count; i++) // i는 0부터 count-1까지 증가, count번 반복
    {
        printf("%c", ch); // 매개변수 ch에 받은 문자 출력
    }

    return;
}

// 5행에서 알 수 있듯이 반환값이 없는 함수의 경우 선언과 정의의 반환형에 void를 사용하는 것을 알 수 있다.