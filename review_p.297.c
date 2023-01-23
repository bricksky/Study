#include <stdio.h>

int main(void)
{
    char ch1, ch2;

    scanf("%c%c", &ch1, &ch2);  // 2개의 문자를 연속 입력
    printf("[%c%c]", ch1, ch2); // 입력된 문자 출력

    return 0;
}

/*

%c는 공백, 탭, 개행 문자 모든것을 받기에 
ex1)    ab 를 입력하면 [ab]로 나오고,
ex2)    a스페이스바 를 누르면 [a ] 로 나오고,
ex3)    a만 누르고 엔터를 입력하면 [a
                               ] 이런 식으로 결과가 나온다.