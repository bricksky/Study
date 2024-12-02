#include <stdio.h>

int main(void)
{
    char fruit[20] = "strawberry"; // char 배열 선언과 문자열 초기화

    printf("딸기 : %s\n", fruit);             // 배열명으로 저장된 문자열 출력
    printf("딸기잼 : %s %s\n", fruit, "jam"); // 문자열 상수를 직접 %s로 출력

    return 0; // fruit라는 변수명에 strawberry를 넣었다. 따라서 7행에서는 fruit를 호출하면  strawberry가 나오게 된다.
    // 마찬가지로 8행에서는 fruit를 호출하고 새로운 문자열을 호출했다. 해당되는 문자열은 jam이기에 합쳐저서 strawberry jam이 나오게되는 것이다.
    // 문자열은 %s에 의해 호출되며 문자열을 저장하는 변수는 char형 임을 알아야 한다.
}
