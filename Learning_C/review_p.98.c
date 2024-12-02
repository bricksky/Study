#include <stdio.h>

int main(void)
{
    int a, b, tot;
    double avg; // 점수는 정수이기에 int형을 활용하고, 평균점수는 실수로 나올 수 있기에, double형을 사용합니다.

    printf("두 과목의 점수를 입력해주세요: ");
    scanf("%d%d", &a, &b);
    tot = a + b;
    avg = tot / 2.0;

    printf("평균점수를 알려드립니다: %.1lf\n", avg);

    return 0;
}