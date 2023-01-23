#include <stdio.h>
int main(void)
{
    char ch;

    printf("문자 입력: ");
    scanf("%c", &ch);                                 // &ch를 해야 char자리에 문자를 입력받을 수 있다.
    printf("%c 문자의 아스키 코드 값: %d\n", ch, ch); // 둘다 char형으로 받았다. 따라서 ch, ch로 받으면 된다.
    return 0;
}

// 7행에서 &ch로 받지 않고, ch로 받은 것은 나의 실수...!