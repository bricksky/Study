#include <stdio.h>
int main(void)
{
    int n;
    printf("정수 입력 : ");
    scanf("%d", &n);
    switch (n % 3)
    {
    case 0:
        printf("거짓");
        break;
    default:
        printf("참");
        break;
    }
    return 0;
}

// 나머지 연산을 통해 정수입력을 받고 참/거짓을 만들어내는 함수이다.
// default의 경우, 나머지가 0인 경우를 제외한 모든 경우에 적용되기에 사용했다.
// 나머지가 0인 경우에는 9행에 적용된 값으로 결과값이 나오고, 나머지가 1, 2인 경우에는 default를 통해 13행으로 들어간다.