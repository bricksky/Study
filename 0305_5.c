
#include <stdio.h>

int main()
{
    int answer;

    printf("당신은 사람입니까? (사람: 0, 외계인: 1) ");
    scanf("%d", &answer);

    if (answer == 0)
    {
        printf("당신은 성별은? (남자: 0, 여자: 1) ");
        scanf("%d", &answer);

        if (answer == 0)
        {
            printf("당신은 남자입니다.\n");
        }
        else if (answer == 1)
        {
            printf("당신은 여자입니다.\n");
        }
        else
        {
            printf("잘못된 입력입니다.\n");
        }
    }
    else if (answer == 1)
    {
        printf("당신은 외계인입니다.\n");
    }
    else
    {
        printf("잘못된 입력입니다.\n");
    }

    return 0;
}

/*
#include <stdio.h>

int main()
{
    char ch;
    printf("알파벳을 입력하세요: ");
    scanf("%c", &ch);
    printf("%c의 아스키 코드값은 %d입니다.", ch, ch);
    return 0;
}
*/