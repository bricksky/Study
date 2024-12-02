#include <iostream>
// using namespace std;

using std::cin;
using std::cout;
using std::endl;
// using std: -> 위에서 전역변수 선언을 했기에 매번 적을 필요가 없다.

int main()
{
    int num = 20;
    cout << "Hello World!" << endl;
    cout << "Hello"
         << "World!" << endl;
    cout << num << ' ' << 'A';
    cout << ' ' << 3.14 << endl;
    return 0;
}