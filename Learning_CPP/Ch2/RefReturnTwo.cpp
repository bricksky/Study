#include <iostream>
using namespace std;

int &RefRetFuncOne(int &ref)
{
    ref++;
    return ref;
}

int main()
{
    int num1 = 1;                   // num1=1이겠지?
    int num2 = RefRetFuncOne(num1); // num2는 마찬가지로 2이겠지..num1도 2겠지? 같은 상태니까.

    num1 += 1;   // num1 += 1은 결국 num1에 1을 더하라는 말이니까, num1 = 3일테고,
    num2 += 100; // num2도 마찬가지로 2일텐데, num2 += 100을 통해 num2는 102가 되겠구나..
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num1 << endl;
    return 0;
}