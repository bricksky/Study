#include <iostream>
using namespace std;

namespace BestComImpl // 이름공간 안에 함수의 선언만 삽입되어있다.
{
    void SimpleFunc();
}

namespace ProgComImpl // 이름공간 안에 함수의 선언만 삽입되어있다.
{
    void SimpleFunc();
}

int main()
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc() // BestComImpl에 선언된 함수 SimpleFunc()의 정의 부분이다.
{
    cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc() // BestComImpl에 선언된 함수 SimpleFunc()의 정의 부분이다.
{
    cout << "ProgCom이 정의한 함수" << std::endl;
}