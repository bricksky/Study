#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int res;

    res = (++a, ++b); // 차례로 연산이 수행되며 결과적으로
                      // res에 저장되는 값은 증가된 b의 값이다.
    printf("a:%d, b:%d\n", a, b);
    printf("res:%d\n", res);

    return 0;
}

// res는 대입연산자보다 우선 순위가 낮은 유일한 연산자로 활용된다.
// 따라서 8행에서는 ++a의 계산이 우선 진행되어 a의 값이 11이 되는 것을 알 수 있다. 11이 된 a는 res값이 되어 11이 된 후에, b의 계산이 진행된다.