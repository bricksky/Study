#include <stdio.h>

void fruit(int count);

int main(void)
{
    fruit(1); // 처음 호출하므로 1을 인수로 준다.

    return 0;
}

void fruit(int count) // 호출 횟수를 매개변수에 저장
{
    printf("apple\n");
    if (count == 3)
        return;       // 호출 횟수가 3이면 반환하고 끝낸다.
    fruit(count + 1); // 재호출할 때 호출 횟수를 1 증가
    printf("jam\n");
}

/* 17행에서   printf("jam\n");    을 통해 호출 결과가 jam jam이 나온 것을 알 수 있다.
이는 재호출을 했기 때문인데, 해당 호출의 경우 바로 위, 직전에 호출한 곳으로 돌아가게 된다. 
 printf("jam\n"); 이전에 호출했던 
 fruit(count + 1); 로 돌아가는데 fruit(1)을 갖고 있기에 1을 통해 jam이 한번 출력되고, 1이 들어가 2가 되어 한번 더 jam 을 출력한다.
 하지만 3이 되면 호출을 멈춘다는 16행의 return이 존재하여 
 apple
 apple
 apple
 jam
 jam 으로 실행결과가 나타난다.