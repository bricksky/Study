#include <stdio.h>

int main(void)
{
    char grade;
    char name[30];

    printf("당신의 이름은 무엇인가요?: ");
    scanf("%s", name);
    getchar(); // 입력 버퍼를 해결하기 위해 getchar를 사용해야 한다.
    printf("당신의 학점은 몇인가요?: ");
    scanf("%c", &grade);
    printf("%s의 학점은 %c입니다. 한 학기 고생 많으셨습니다.\n", name, grade);

    return 0;
}

// scanf의 경우, 문자를 실수로 사용하기 위한 변환 과정을 돕는 함수이다.
// 9행에서는 문자로 인식하기에 scanf를 사용하지 않아도 된다. 추가적으로 %s를 사용하기에 문자열임이 확정된다.
// 하지만, 11행에서 grade에 &를 사용한 이유는, %c로 받아 숫자로 인식하기에 반드시 &를 거쳐야 한다.