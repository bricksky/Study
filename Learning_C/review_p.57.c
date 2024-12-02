#include <stdio.h>

int main(void)
{
    char ch1 = 'A'; // 문자로 초기화, 저장된 값은 문자의 아스키 코드 값
    char ch2 = 65;  // 문자 'A'의 아스키 코드 값에 해당하는 정수로 초기화

    printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);   // 변환서식: 문자는 C, 문자열은 S, 정수는 D
    printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2); // char자료형에 변수명이 ch1, ch2인 것이다. A는 변수명 ch1에 들어가고, 65는 변수명 ch2에 들어가는 것이다.

    return 0;
}