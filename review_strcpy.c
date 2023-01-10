#include <stdio.h>
#include <string.h> // 문자열을 다룰 수 있는 string.h 헤더 파일 포함

int main(void)
{
    char fruit[20] = "strawberry"; // strawberry로 초기화

    printf("%s\n", fruit);   // strawberry 출력
    strcpy(fruit, "banana"); // fruit에 banana 복사
    printf("%s\n", fruit);   // banana 출력

    return 0;
    //   1. strcpy 함수는 string.h 헤더파일을 필수적으로 필요로한다. p.440을 참고하면 된다.
    //   2. strcpy 함수에 의해 strawbery가 있는 주소로 찾아간 후, banana\0까지 입력하면 남은 erry가 있을 것이다.
}
