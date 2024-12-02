#include <iostream>
using namespace std;

int RefRetFuncTwo(int &ref)
{
    ref++; // num2는 2가 된거고, num1도 2가 된 상태?
    return ref;
}

int main()
{
    int num1 = 1;                   // num1은 1이겠지?
    int num2 = RefRetFuncTwo(num1); // num2는 마찬가지로 num1의 값을 그대로 가져가겠지

    num1 += 1;   // num1은 2+1 해서 3이된거고
    num2 += 100; // num2는 2+100해서 102가 된거고
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    return 0;
}