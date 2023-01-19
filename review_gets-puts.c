#include <stdio.h>

int main(void)
{
    char str[80];

    printf("문자열 입력 : "); // 입력 안내 메시지 출력
    gets(str);                // 빈칸을 포함한 문자열 입력
    puts("입력된 문자열 : "); // 문자열 상수 출력
    puts(str);                // 배열에 저장된 문자열 출력

    return 0;
}

/* gets 함수의 경우 빈칸을 포함하여 문자열을 입력받는다.
strcpy의 경우 공백이 발생하면 해당 공백에서 종료하지만, gets의 경우 My name 과 같이 빈칸이 있는 문자열도 하나로 인식한다. */