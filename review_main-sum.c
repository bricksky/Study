#include <stdio.h>

void sum(int n); // 함수를 선언함

int main(void) // main 함수 영역에 해당함
{
    sum(10);
    sum(100);
    return 0;
}

void sum(int n) // 선언한 함수를 정의 함 (함수 정의 부분에서 void가 있다해도 함수를 호출한 경우에는 void를 적지 않는다)
{
    int i, tot = 0;          // 함수의 횟수를 세는 변수와 함수의 합을 세는 변수를 정의한다.
    for (i = 1; i <= n; i++) // int n을 통해 마지막 수를 받고 전체 n까지의 합을 정한다.
    {
        tot += i; // tot값을 통해 전체 합을 저장할 변수를 저장한다.
    }
    printf("1부터 %d까지의 합은 %d입니다. \n", n, tot);
}