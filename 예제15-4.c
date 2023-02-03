#include <stdio.h>

int main(void)
{
    int ary[5];

    printf("   ary의 값: %u\t", ary);
    printf("  ary의 주소: %u\n", &ary);
    printf("     ary+1: %u\t", ary + 1);
    printf("    &ary+1: %u\n", &ary + 1);

    return 0;
}

/*

ary 와 ary+1 의 값은 int형에 의해 4만큼 차이나는 것이고,
ary의 주소와 ary+1의 주소는 배열 전체의 크기이므로 20만큼 차이가 나는 것이다.

*/