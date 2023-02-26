#include <stdio.h>

int main()
{
    char a, b;
    scanf("%c, %c", &a, &b); // 두 알파벳 문자 입력받기 (콤마와 띄어쓰기에 주의)

    // 입력받은 두 문자가 소문자, 대문자 순서로 입력되었는지 확인
    if (a >= 'a' && a <= 'z' && b >= 'A' && b <= 'Z')
    {
        printf("T");
    }
    else
    {
        printf("F");
    }

    return 0;
}