#include <stdio.h>

int main()
{

    char a[4][10] = {"horse", "fox", "hippo", "tiger"};
    char *pa[] = {a[0], a[1], a[2], a[3]};
    int count;
    int i;
    count = sizeof(pa) / sizeof(pa[0]);
    for (i = 0; i < count; i++)
    {
        printf("%c", pa[i][i]);
    }
    return 0;
}

// 포인터는 형에 관계없이 항상 8바이트이다!!