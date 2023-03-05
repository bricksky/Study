#include <stdio.h>

int main()
{
    int x = 4, y = -4;
    printf("%d\n", x < 5 && y < 10);   // 참 참 -> 참
    printf("%d\n", x < 20 || y > 30);  // 참 거짓 -> or (2C1)
    printf("%d\n", x != 7 && y != 3);  // 참 참 -> 참
    printf("%d\n", x > 25 || y <= 50); // 거짓 참 -> or (2C1)
    printf("%d\n", x != 5 && y <= 45); // 참 참 -> 참
}