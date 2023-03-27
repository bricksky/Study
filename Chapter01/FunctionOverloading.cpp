#include <iostream>

void MyFunc(void)
{
    std::cout << "MyFunc(void)called" << std::endl;
}

void MyFunc(char C)
{
    std::cout << "MyFunc(char C)called" << std::endl;
}

void MyFunc(int a, int b)
{
    std::cout << "MyFunc(int a, int b)called" << std::endl;
}

int main(void)
{
    MyFunc();
    MyFunc('A');
    MyFunc(12, 13);
    return 0;
}

/*
주어진 코드에서는 함수 이름이 대소문자를 구분하는데, main 함수에서 호출하는 함수의 이름이 대문자 "MyFunc"로 작성되어 있습니다.
하지만 함수 정의에서는 소문자 "Myfunc"로 작성되어 있습니다. 이는 C++에서 함수 이름은 대소문자를 구분하기 때문에, 대소문자를 정확하게 일치시켜야 합니다.
*/