#include <stdio.h>

int main(void)
{
    char ch;
    printf("문자를 입력해주세요: ");
    scanf("%c", &ch);
    printf("%c의 아스키 코드 값이 궁금하시죠?\n %c의 아스키 코드 값은 %d입니다.", ch, ch, ch);

    return 0;
}