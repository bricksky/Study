#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
    return num1 + num2;
}

int mani()
{
    std::cout << Adder() << std::endl;
    std::cout << Adder(5) << std::endl;
    std::cout << Adder(3, 5) << std::endl;

    return 0;
}

/*

Q1.
3행 -> Adder 함수의 디폴트 값으로 1, 2 = 3이 지정되어있다.
10행 -> 아무것도 없으므로, 값은 3
11행 -> 5가 있지만 첫번째 값에 해당, 5 + 2 -> 7
12행 -> 3 + 5 -> 8


Q2.
; 표시 안붙여도 되나요?
네, 맞습니다. C++에서 함수의 정의(implementation)에서는
함수의 프로토타입(prototype)에 사용되는 디폴트(default) 매개변수 값에 대한 정보를 중복해서 제공하지 않아도 됩니다.
함수 프로토타입에서 디폴트 매개변수 값을 제공해주면,
컴파일러는 함수 호출 시 인자를 넘기지 않은 경우 해당 디폴트 값으로 자동으로 대체합니다.
*/