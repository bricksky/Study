#include <iostream>

int main()
{
    int a, b, c, d, e, t;

    std::cout << "1번째 정수 입력: ";
    std::cin >> a;

    std::cout << "2번째 정수 입력: ";
    std::cin >> b;

    std::cout << "3번째 정수 입력: ";
    std::cin >> c;

    std::cout << "4번째 정수 입력: ";
    std::cin >> d;

    std::cout << "5번째 정수 입력: ";
    std::cin >> e;

    t = a + b + c + d + e;
    std::cout << "합계:" << t << std::endl;

    return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, sum;

    cout << "1번째 정수 입력: ";
    cin >> num1;
    cout << "2번째 정수 입력: ";
    cin >> num2;
    cout << "3번째 정수 입력: ";
    cin >> num3;
    cout << "4번째 정수 입력: ";
    cin >> num4;
    cout << "5번째 정수 입력: ";
    cin >> num5;

    sum = num1 + num2 + num3 + num4 + num5;
    cout << "합계: " << sum << endl;

    return 0;
}
*/

/*
아래는 내가 처음 작성한 예제 코드이다.
#include <iostream>

int main()
{
    int a, b, c, d, e, t;

    std::cout << "1번째 정수 입력: ";
    std::cin >> "%d, a";

    std::cout << "2번째 정수 입력: ";
    std::cin >> "%d, b";

    std::cout << "3번째 정수 입력: ";
    std::cin >> "%d, c";

    std::cout << "4번째 정수 입력: ";
    std::cin >> "%d, d";

    std::cout << "5번째 정수 입력: ";
    std::cin >> "%d, e";

    std::cout << "합계: " std::cin >> "%d, a+b+c+d+e"

        return 0;
}
*/