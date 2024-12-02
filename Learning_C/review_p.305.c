#include <stdio.h>

int main(void)
{
    char ch;
    int i;

    for (i = 0; i < 4; i++) // 4번 반복
    {
        scanf("%c", &ch); // 문자 입력
        printf("%c", ch); // 입력된 문자 출력
    }

    return 0;
}

/*

최초 scanf 함수가 호출될 때 키보드로 문자열을 입력하면 일단 버퍼에 저장한 후 첫번째 문자만 변수에 저장한다.
이후에 scanf함수 호출부터는 버퍼에 남아있는 문자열에서 차례로 다음 문자를 가져오고 종료된다.

*/