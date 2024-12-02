#include <iostream>
using namespace std;

bool IsPostive(int num)
{
    if (num <= 0)
        return false;
    else
        return true;
}

int main()
{
    bool isPos;
    int num;
    cout << "Input number: ";
    cin >> num;

    isPos = IsPostive(num);
    if (isPos)
        cout << "Postive number" << endl;
    else
        cout << "Negative number" << endl;

    return 0;
}

// IsPositive 함수가 반환한 값을 isPos 변수에 할당한 뒤,
// if-else 조건문을 이용하여 양수인 경우 "Positive number"를, 음수인 경우 "Negative number"를 출력합니다.

// bool 값은 조건문에서 사용될 때 주로 활용되며, 조건문의 결과가 참인지 거짓인지에 따라 프로그램의 실행 흐름이 결정됩니다.
// 예를 들어, if 문에서 조건식이 true인 경우 해당 블록 내의 코드가 실행되고, false인 경우 해당 블록이 무시되고 다음 블록이 실행됩니다.
