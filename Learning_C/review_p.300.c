#include <stdio.h>

int main(void)
{
    int ch; // 입력 문자를 저장할 변수

    ch = getchar(); // 함수가 반환하는 문자를 바로 저장
    printf("입력한 문자 : ");
    putchar(ch); // 입력한 문자 출력
    putchar("\n");

    return 0;
}

/*

#include <stdio.h>

int main(void)
{
    int ch; // 입력 문자를 저장할 변수

    ch = getchar(); // 함수가 반환하는 문자를 바로 저장
    printf("입력한 문자 : ");
    putchar(ch); // 입력한 문자 출력

    return 0;
}

위와 같은 형식으로 출력하면 개행문자가 부재하기에 "입력한 문자 : " 이후에 %가 나타나 한줄 내려쓰기가 적용되지 않는다.
*/
