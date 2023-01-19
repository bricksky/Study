/*
#include <stdio.h>

void swap(int x, int y);            // 두 변수의 값을 바꾸는 함수 선언

int main(void)
{
    int a = 10, b = 20;             // 변수 선언과 초기화

    swap(a, b);                     // a, b의 값을 복사해서 전달
    printf("a:%d, b:%d\n", a, b);   // 변수 a, b 출력

    return 0;
}

void swap(int x, int y)             // 인수 a, b의 값을 x, y에 복사해서 저장
{
    int temp;                       // 교환을 위한 변수

    temp = x;                       // temp에 x값 저장
    x = y;                          // x에 y값 저징
    y = temp;                       // y에 temp값 저장
}
*/

/*
#include <stdio.h>

void swap(int *x, int *y); // 두 변수의 값을 바꾸는 함수 선언

int main(void)
{
    int a = 10, b = 20; // 변수 선언과 초기화

    swap(&a, &b);                 // a, b의 값을 복사해서 전달
    printf("a:%d, b:%d\n", a, b); // 변수 a, b 출력

    return 0;
}

void swap(int *x, int *y) // 인수 a, b의 값을 x, y에 복사해서 저장
{
    int temp; // 교환을 위한 변수

    temp = *x; // temp에 x값 저장
    *x = *y;   // x에 y값 저징
    *y = temp; // y에 temp값 저장
}
*/

/* 위의 식이 기존에 교재에 나와있는 식이다.
반면, 아래의 식은 10행에 swap(a,b) 자리에 swap(&a, &b)로 바꾸어 해당 값의 주소값을 변환하게 하여 다른 값을 도출해낸다.
*/