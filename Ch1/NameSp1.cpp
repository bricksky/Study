#include <iostream>
using namespace std;

namespace BestComImpl
{
    void SimpleFunc()
    {
        cout << "BestCom이 정의한 함수" << std::endl;
    }
}

namespace ProgComImpl
{
    void SimpleFunc()
    {
        cout << "ProgCom이 정의한 함수" << std::endl;
    }
}

int main()
{
    BestComImpl::SimpleFunc();
    BestComImpl::SimpleFunc();
    return 0;
}

//  :: -> 이 기호는 범위를 지정하는 연산자이다.