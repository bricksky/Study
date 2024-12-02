#include <stdio.h>

int main(void)
{
    char animal1[5][10] = {
        {'d', 'o', 'g', '\0'},
        {'t', 'i', 'g', 'e', 'r', '\0'},
        {'r', 'a', 'b', 'b', 'i', 't', '\0'},
        {'h', 'o', 'r', 's', 'e', '\0'},
        {'c', 'a', 't', '\0'}};

    char animal2[][10] = {"dog", "tiger", "rabbit", "horse", "cat"};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%s", animal1[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)

    {
        printf("%s", animal2[i]);
    }

    return 0;
}

/*

5~10행은 문자 상수로 하나씩 초기화한 경우이다.
반면, 12행~14행은 문자 상수 하나씩이 아닌, 문자열 상수로 한 행씩 초가화한 경우이다,
5행에 의해서  dogtigerrabbithorsecat이 출력되고
19행의 '\n'에 의해서 한 행 내려가서 다시 한번 dogtigerrabbithorsecat이 출력된다.

*/