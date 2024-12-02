#include <iostream>
using namespace std;

namespace BestComImpl
{
    void SimpleFunc();
}

namespace BestComImpl
{
    void PrettyFunc();
}

namespace ProgComImpl
{
    void SimpleFunc();
}

int main()
{
    BestComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc()
{
    cout << "Bestcom이 정의한 함수" << std::endl;
    PrettyFunc();
    ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc()
{
    cout << "So Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc()
{
    cout << "Progcom이 정의한 함수" << std::endl;
}