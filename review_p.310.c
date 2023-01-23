#include <stdio.h>

void my_gets(char *str, int size);

int main(void)
{
    char str[7]; // 문자열을 저장할 배열

    my_gets(str, sizeof(str));           // 한 줄의 문자열을 입력하는 함수
    printf("입력한 문자열 : %s\n", str); // 입력한 문자열 출력

    return 0;
}

void my_gets(char *str, int size) // str은 char 배열, size는 배열의 크기
{
    int ch;    // getchar 함수의 반환값을 저장할 변수
    int i = 0; // str 배열의 첨자

    ch = getchar();                        // 첫 번째 문자 입력
    while ((ch != '\n') && (i < size - 1)) // 배열의 크기만큼 입력
    {
        str[i] = ch;    // 입력한 문자를 배열에 저장
        i++;            // 첨자 증가
        ch = getchar(); // 새로운 문자 입력
    }
    str[i] = '\0'; // 입력된 문자열의 끝에 널 문자를 저장
}

/*

버퍼의 경우 임시 기억 장소로 생각하면 편하다.
엔터를 누르기 전까지의 정보를 프로그램에 전달하기 전에 잠시 들어갔다가, 엔터를 누르면 저장이 되는 방식이다.
getchar의 경우 하나의 문자만 받는다는 점에서 일반적인 scanf와 다르다.

Be Happy를 입력할 경우, 위에서 배열의 크기를 7로 주었기에
_ _   _     _ _ _ _
B e 띄어쓰기  h a p \n 이 들어가게 되어 출력은 Be hap로 나오게 되는 것이다.

버퍼 관련해서는 해당 동영상을 참고했다. () https://www.youtube.com/watch?v=yJEf0dimmrg )

*/