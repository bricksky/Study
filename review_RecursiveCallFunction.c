/*#include <stdio.h>

void fruit(void);       // 함수 선언

int main(void)
{
    fruit();            // 함수 호출

    return 0;
}

void fruit(void)         // 재귀호출 함수 정의
{
    printf("apple\n");
    fruit();             // 자신을 다시 호출
}
*/

/*
#include <stdio.h>

void fruit(int count);

int main(void)
{
    fruit(1); // 처음에 호출하므로 1을 인수로 준다.

    return 0;
}

void fruit(int count) // 호출 횟수를 매개변수에 저장
{
    printf("apple\n");
    if (count == 3)
        return;       // 호출 횟수가 3이면 반환하고 끝낸다.
    fruit(count + 1); // 재호출할 때 호출 횟수를 1 증가
}
*/

/* 첫번째 예시의 경우 count에 제한을 두지 않은 경우이지만, 두번째 예시의 경우 count에 제한을 둔 경우이다.
두번째 예시를 보면, 15행에서 count가 3인 경우 return을 하도록 하여 호출 횟수가 3이면 반환 이후 종료하는 것을 확인할 수 있다.*/