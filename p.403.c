
#include <stdio.h>

int main(void)
{
    char mark[5][5] = {0};
    int i, j;
    for (i = 0; j < 5; j++)
    {
        if ((i == j) || (i == 4 - j))
            mark[i][j] = 'X';
    }
}