#include <stdio.h>

int main(void)
{
    int res;

    res = sizeof(short) > sizeof(long); // sizeof 연산자를 통해 short 와 long의 바이트를 비교한다. 비교한 값을 res에 넣는다. res에는 0이 대입된다.

    printf("%s\n", (res == 1) ? "short" : "long"); // res에는 0이 들어간다. 조건 연산자를 활용해야 한다.
    // 조건연산자는 조건식이 참이면 두 번쨰 피연산자를 값으로 갖게되고 거짓이면 그 다음의 피연산자를 값으로 갖게 된다.
    // 해당 행에 의하면 res에는 0이 들어가게 되고, res==1이라는 식을 만족하지 못하기에 long을 값으로 갖게 된다.
    // 따라서 출력되는 값은 1이 된다.
    return 0;
}