#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;

    if(a < 0)              // a가 0보다 작지만
    {
        if (b > 0)         // b가 0보가 크면
        {
            printf("ok");  // ok를 출력
        } 
    }
    else
    {
        printf("ok");      // a가 0이상이면 ok출력
    }

    return 0;
}