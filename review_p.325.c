#include <stdio.h>

int main(void)
{
    char str[80];

    printf("공백이 포함된 문자열 입력 : ");
    gets(str); // 배열명으로 주고 함수 호출
    printf("입력한 문자열은 %s입니다.", str);

    return 0;
}

/*

gets함수의 특징
1) 일반적인 sacnf 함수와 다르게 공벡괴 개행문자를 모두 가져온다.
2) 버퍼에서 str로 받아오는 과정에서 기존에 유지하던 개행문자"\n"을 "\0" null값으로 바꾼다.

*/