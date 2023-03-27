#include <iostream>
using namespace std;

int BoxVolume(int length, int width = 1, int height = 1);
// 첫 번째 매개변수에는 디폴트값이 저장되어있지 않으므로 반드시 값을 입력해주어야 한다.

int main()
{
    cout << "[3,3,3]: " << BoxVolume(3, 3, 3) << std::endl;
    cout << "[5,5,D]: " << BoxVolume(5, 5) << std::endl;
    cout << "[7,D,D]: " << BoxVolume(7) << std::endl;
    // cout<<"[D,D,D]: "<<BoxVolume()<<std::endl;
    return 0;
}

int BoxVolume(int length, int width, int height)
{
    return length * width * height;
}