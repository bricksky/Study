#include <stdio.h>

int main(void)
{
    int num, grade; // 학번과 학점을 저장할 변수

    printf("학번 입력 : ");
    scanf("%d", &num); // 학번 입력
    getchar();         // 버퍼에 남아 있는 개행 문자 제거
    printf("학점 입력 : ");
    grade = getchar(); // 학점 입력
    printf("힉반 : %d, 학점 : %c \n", num, grade);

    return 0;
}

// 9행의 getchar(); 을 통해 버퍼에 남아있는 개행 문자를 제거할 수 있다.