#include <stdio.h>

int main()
{
    int num;
    int number[1000];
    int change = 0;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < num - 1; i++)
    {
        for (int i = 0; i < num - 1; i++)
        {
            if (number[i + 1] < number[i])
            {
                change = number[i];
                number[i] = number[i + 1];
                number[i + 1] = change;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", number[i]);
    }

    return 0;

    /*

    auto지역변수와 static 자역변수의 차이점.

    static 자역변수의 경우에는 프로그래밍이 실행될 때 메모리에 할당되며 프로그램이 종료될 때까지 존재한다.

    따라서 auto지역변수의 경우에는 0에서 시작해서 1의 값을 받으면
    1
    초기화
    1
    초기화
    1 이런식으로 결과가 나오는 것이고

    static 지역변수의 경우에는 0에서 시작해서 1의 값을 받으면
    1, (+1)
    2, (+1)
    3 이런 식으로 결과가 나오게 된다.

    */