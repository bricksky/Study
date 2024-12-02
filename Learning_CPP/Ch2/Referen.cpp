#include <iostream>
using namespace std;

int main()
{
    int num1 = 1020;
    int &num2 = num1;
    // int &num2 = num1; 이 부분에서 & 연산자를 사용하여 num1 변수의 참조를 num2 변수에 할당하고 있다.
    // 이는 num2 변수가 num1 변수를 참조한다는 의미이다.

    num2 = 3047;
    // num2 = 3047; 이 부분에서 num2 변수에 값을 할당하면, 이는 실제로 num1 변수에 값을 할당하는 것과 같다.
    // 따라서 num1 변수의 값도 3047로 변경된다.

    cout << "VAL: " << num1 << endl;
    cout << "REF: " << num2 << endl;

    cout << "VAL: " << &num1 << endl;
    cout << "REF: " << &num2 << endl;

    return 0;
}