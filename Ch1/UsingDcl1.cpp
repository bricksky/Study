#include <iostream>
using namespace std;

namespace Hybrid
{
    void HybFunc()
    {
        cout << "So simple function!" << std::endl;
        cout << "In namespace Hybrid!" << std::endl;
    }
}

int main()
{
    using Hybrid::HybFunc;
    HybFunc();
    return 0;
}