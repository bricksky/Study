#include <stdio.h>

int main(void)
{
    unsigned int a;

    a = 4294967295;    // 큰 양수로 저장
    printf("%d\n", a); // %d로 출력
    a = -1;            // 음수 저장
    printf("%u\n", a); // %u로 출력

    return 0; // 원래 받은 수는 4294967295이지만, a=-1로 저장했다. %d의 경우 양수,음수를 모두 받지만, %u의 경우 양수만 받기에 출력이 -1이 나오고, 4294967295가 나오는 것이다.
}