#include <stdio.h>

int main(void)
{
    int hour, min, sec;
    double time = 3.76;

    hour = (int)time;
    time -= hour;
    time *= 60.0;
    min = (int)time;
    time -= min;
    time *= 60.0;
    sec = (int)time;
    printf("3.76시간은 %d시간 %d분 %d초 입니다.\n", hour, min, sec);

    return 0;
}

//(int)와 같은 형식은 캐스팅이라고 부른다. 형 변환에 사용된다.
// 형 변환 연산자는 일시적으로 피연산자의 값을 원하는 형태로 바꾼다.