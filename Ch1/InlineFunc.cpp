#include <iostream>
using namespace std;

inline int SQUARE(int x)
{
    return x * x;
}

int main()
{
    cout << SQUARE(5) << std::endl;
    cout << SQUARE(12) << std::endl;

    return 0;
}