#include <iostream>

int main()
{
    int num = 20;
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello!"
              << "World!" << std::endl;
    std::cout << num << ' ' << 'A',
        std::cout << ' ' << 3.14 << std::endl;
    return 0;
}

/*
- endl: 개행문자로 작용
- std::cout << 를 이용해 출력
- std::endl

- C언어와 달리 %d %s와 같은 서식문자를 이용해서 출력 형태를 설정하지 않아도, 적절한 출력이 이루어진다.
*/
