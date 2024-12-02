
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

/*
char mark[5][5]에서
앞의 [5]는 세로열인 행이고, 뒤의 [5]는 가로열인 열이다.
따라서 0칸일때 세로0가로0 일떄 X가 출력되고, 세로0가로4일때도 X가 출력된다.
반복해서 1칸일때 세로1가로1 일떄 X가 출력되고, 세로1가로3일때도 X가 출력된다.
반복해서 2칸일때 세로2가로2 일떄 X가 출력되고, 세로2가로2일때도 X가 출력된다.
반복해서 3칸일때 세로3가로3 일떄 X가 출력되고, 세로3가로3일때도 X가 출력된다.
반복해서 4칸일때 세로4가로4 일떄 X가 출력되고, 세로4가로4일때도 X가 출력된다.
*/