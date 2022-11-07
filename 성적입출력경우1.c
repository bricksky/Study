#include <stdio.h>

int main()
{
    int score;
    char grade;
    printf("당신의 점수를 입력하세요: ");
    scanf("%d" ,&score);

    if(score >= 90)
    {
        grade = 'A';
        printf("당신의 점수는 %d이고 등급은 %c입니다.\n",score, grade);
    }
    else if(score < 90 && score >=80)
    {
        grade = 'B';
        printf("당신의 점수는 %d이고 등급은 %c입니다.\n",score, grade);
    }
    else if(score < 70 && score >=60)
    {
        grade = 'C';
        printf("당신의 점수는 %d이고 등급은 %c입니다.\n",score, grade);
    }
    
    printf("작업 종료\n");
    return 0;
}
