#include <stdio.h>

int main(void)
{
    int kor = 70, eng = 80, mat = 90;
    int tot;
    int ave; // 평균이 실수로 나올 수 있기에 double형을 해보았고 확인이 된 후, 정수형으로 바꿨다.

    tot = kor + eng + mat;
    ave = tot / 3;
    printf("국어:%d, 영어: %d, 수학: %d\n", kor, eng, mat);
    printf("총점: %d\n", tot);
    printf("평균: %d", ave); // double형으로 했을 때에는 실수형이기에 %d가 아닌 %.lf로 설정했고, int형은 정수형이기에 %d로 설정했다.
}