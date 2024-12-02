#include <stdio.h>

int main(void)
{
    int a = 20, b = 3;
    double res;

    res = ((double)a) / ((double)b); // (double)을 사용해 a와 b의 값을 실수로 변환 추후 나누기 연산을 통해 값을 구해야하기 때문.
    printf("a = %d, b = %d\n", a, b);
    printf("a / b의 결과 : %.1lf\n", res);

    a = (int)res; // (int)를 사용해 res의 값에서 정수 부문만 추림. 해당 행에서 실수 연산을 해야하기에 앞서 double를 통해 형 변환을 한 것을 알 수 있다.
    printf("(int) %.1lf의 결과 : %d\n", res, a);

    return 0;
}
