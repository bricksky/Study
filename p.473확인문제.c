/*

<문제 1번>
문제: 4행 5열의 행렬의 값을 저장할 2차원 배열을 동적 할당하는 코드를 작성하세요.
배열명: mattrix (이중 포인터)

답안:
int **matrix = (int**) malloc (4*sizeof(int));
for (i=0; i<4; i++)
{
    matrix[i] = (int*) malloc (5*sizeof(int));
}

*/

/*

<문제 2번>
문제: 1번에서 만든 동적 할당 영역을 반환하는 코드를 작성하세요

답안:
for(i=0; i<4; i++)
{
    free (matrix[i]);
}
free (matrix);

*/
