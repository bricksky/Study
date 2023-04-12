#include <iostream>
using namespace std;

int &RefRetFuncOne(int &ref)
{
    ref++;      // ++을 통해 각각의 num1의 메모리 공간이 1 증가한다.
    return ref; // num1=3인 상태에서 ++를 통해 num1=4가 되고, 같은 메모리를 할당받는 num2도 4라는 값을 갖게된다.
}

int main()
{
    int num1 = 1;                    // num1에 1의 값이 들어간다.
    int &num2 = RefRetFuncOne(num1); // num2에는 RefRetFuncOne(num1)을 통해 num1과 값은 메모리 공간을 갖는다.

    num1++; // num1에 1을 증가시킨다. -> num1 = 2
    num2++; // num2에 1을 증가시킨다. -> num2는 num1과 같은 메모리 공간을 갖는 상태이기 때문에 num2=3이 되고, 자동으로 num1=3이 된다.
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    return 0;
}

// chatGPT 답변
// 그 다음, num1을 1 증가시키고, num2도 1 증가시킵니다.
// 이때 num2는 이미 num1의 참조이기 때문에, num2를 증가시키면 num1이 가리키는 메모리 공간의 값도 증가하게 됩니다.
// 즉, num1과 num2는 모두 3이 됩니다.

// 마지막으로, 다시 num1을 1 증가시키고, num2도 1 증가시킵니다.
// 이때 num2가 가리키는 메모리 공간의 값이 4가 되고, num1이 가리키는 메모리 공간의 값도 4가 됩니다.