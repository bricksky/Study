#include <stdio.h>

int main(void)
{
    int a = 10;
    double b = 3.5;
    void *vp;

    vp = &a;
    printf("a: %d\n", *(int *)vp);
    printf("a의 주소 + 1의 값: %d\n", (int *)vp + 1);
    vp = &b;

    printf("b: %.lf\n", *(double *)vp);

    return 0;
}

/*
10행과 13행에서  *(int *)vp);  *(double *)vp); -> 이런식으로 사용된 부분에서
void pointer을 사용하고자 각각의 형에 맞게 적용한 것이다.
*/