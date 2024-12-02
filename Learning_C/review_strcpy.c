#include <stdio.h>
#include <string.h> // 문자열 관련 함수 원형을 모아놓은 헤더 파일

int main(void)
{
    char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger"); // str1 배열에 "tiger" 복사
    strcpy(str2, str1);    // str2 배열에 str1 배열의 문자 복사
    printf("%s, %s\n", str1, str2);

    return 0;
}

/*
strcpy(저장될 배열명, 저장할 문자열)
이를 통해 10행에서는 str2에 str1을 넣는다는 것을 알 수 있다.
선행된 9행에서 초기회된 str1배열에 tiger을 넣은 사실을 통해 출력값은 tiger,tiger이 나오게 된다.
*/