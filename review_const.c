#include <stdio.h>

int main(void)
{
    int income = 0;
    double tax;
    const double tax_rate = 0.12;

    income = 456;
    tax = income * tax_rate;
    printf("세금은 : %.1lf입니다. \n", tax);

    return 0;

    // const 변수의 특징  1.한번 선언한 이후에는 값을 바꿀 수 없다.
    // 2. 선언과 동시에 초기화 된다.
    // tax_rate는 0.12로 고정되며 456 x 0.12 를 통해 값이 나온다. .lf에 의해 소수점 첫 자리까지 나오므로 값이 54.7이 나온다.
}