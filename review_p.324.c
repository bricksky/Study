#include <stdio.h>

int main(void)
{
    char str[80];

    printf("문자열 입력: ");
    scanf("%s", str);                  // %s를 사용하고 배열명을 준다.
    printf("첫 번째 단어: %s\n", str); // 배열에 입력된 문자열 출력
    scanf("%s", str);
    printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);

    return 0;
}

/*

scanf함수는 공백 개행문자를 모두 걸러낸다.
apple jam을 입력한 경우 \n이 자동으로 apple jam 뒤에 저장되는데, 8행에서 문자열로 받고 9행에서 첫번째 단어를 출력하라는 명령어를 통해
apple가 출력된다. apple와 jam 사이에는 공백이 존재하는 것을 기억해야 한다.
이후 11행에서 출력을 요구했을 때 공백을 걸러내고 jam 을 출력한다.

따라서 결과는
문자열 입력:  apple jam
첫 번째 단어: apple
버퍼에 남아 있는 두 번째 단어 : jam

위와 같이 나오는 것을 알 수 있다.

*/