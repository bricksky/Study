#include <stdio.h>

int main()
{

    int age;
    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    if (age >= 10 && age < 20)
    {
        printf("입력한 나이 %d는 10대 입니다.", age);
    }
    else if (age >= 20 && age < 30)
    {
        printf("입력한 나이 %d는 20대 입니다.", age);
    }
    else
    {
        printf("입력한 나이 %d는 기타입니다", age);
    }

    return 0;
}