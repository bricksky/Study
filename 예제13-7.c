#include <stdio.h>

void add_ten(int *pa);

int main(void)
{
    int a = 10;

    add_ten(&a);
    printf("a:%d\n", a);

    return 0;
}

void add_ten(int *pa)
{
    *pa = *pa + 10;
}

// 9행에서 변수 a의 주소가 함께 전달되며 15행에서는 포인터로 매개변수를 선언해서 받는다.