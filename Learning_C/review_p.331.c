#include <stdio.h>

int main(void)
{
    char str[80] = "apple juice"; // 배열에 문자열 초기화
    char *ps = "banana";          // 포인터에 문자열 연결

    puts(str);         // apple juice 출력하고 줄 바꿈
    fputs(ps, stdout); // banana만 출력
    puts("milk");      // banana에 이어 milk 출력

    return 0;
}

/*
출력값은
apple juice
bananamilk
이렇게 나온다. 왜냐?
fputs의 경우에는 자동 줄바꿈이 없는 상태이고,
puts의 경우에는 자동 줄바꿈이 되기 때문이다.
*/

/*


의 경우에는
출력값이,
apple juice
banana
milk
이렇게 나온다. puts의 경우에는 문자열을 출력하고 자동으로 줄을 바꾼다.
*/