#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pi;       // 할당한 저장 공간을 연결한 포인터
    int size = 5;  // 한 번에 할당할 저장 공간의 크기, int형 변수 5개씩
    int count = 0; // 현재 입력된 양수 개수

    int num; // 양수를 입력할 변수
    int i;   // 반복 제어 변수

    pi = (int *)calloc(size, sizeof(int));
    while (1)
    {
        printf("양수만 입력하세요 => ");
        scanf("%d", &num); // 데이터 입력
        if (num <= 0)      // 0또는 음수이면 종료
            break;
        if (count == size) // 저장공간을 모두 사용하면
        {
            size += 5; // 크기를 다시 늘려서 할당
            pi = (int *)realloc(pi, size * sizeof(int));
        }
        pi[count++] = num;
    }
    for (i = 0; i < count; i++)
    {
        printf("%5d", pi[i]); // 입력한 데이터 출력
    }

    free(pi); // 동적 할당 공간 반납

    return 0;
}