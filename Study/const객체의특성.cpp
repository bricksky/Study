#include <iostream>
using namespace std;

// 클래스로 정의됨.
class SoSimple
{
private:
    int num;

public:
    // int n을 입력받아 num에 대입 후 초기화.
    SoSimple(int n) : num(n)
    {
    }
    SoSimple &AddNum(int n)
    {
        num += n;
        return *this;
    }
    // 멤버 함수로 사용됨.
    void ShowData() const
    {
        cout << "num: " << num << endl;
    }
};

int main()
{
    // obj는 클래스의 객체로 사용됨.
    // const 키워드가 객체 선언 앞에 위치하므로, obj 객체는 생성 후에 수정될 수 없다.
    const SoSimple obj(7);
    obj.ShowData();
    return 0;
}
