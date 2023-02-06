#include <stdio.h>

int add(int a, int b) { return (a + b); }
int sub(int a, int b) { return (a - b); }
int mul(int a, int b) { return (a * b); }

int main(void)
{
    int (*pary[3])(int, int) = {add, sub, mul};
    int i, res = 0;

    for (i = 0; i < 3; i++)
    {
        res += pary[i](2, 1);
        // res = res + pary[i](2, 1) (정답)
    }

    printf("%d", res);

    return 0;
}

/*

res += pary[i](2, 1);  인 경우
2+1 =3
2-1=1
2*1=2

-> 답은 6

----------------------------

res += pary[i](3, 1);  인 경우
3+1 =4
3-1=2
3*1=3

-> 답은 9

----------------------------

res += pary[i](4, 1);  인 경우
4+1 =5
4-1=3
4*1=4

-> 답은 12

*/