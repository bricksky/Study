#include <iostream>
using namespace std;

namespace Car_Const
{
    enum
    {
        ID_LEN = 20,
        MAX_SPEED = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

struct Car
{
    char gamerID[Car_Const::ID_LEN];
    int fuelGauge;
    int curSpeed;

    void ShowCarState();
    void Accel();
    void Break();
};

void Car::ShowCarState()
{
    cout << "소유자 ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << endl;
    cout << "현재속도: " << curSpeed << "km/s" << endl
         << endl;
}

void Car::Accel()
{
    if (fuelGauge <= 0)
        return;
    else
        fuelGauge -= Car_Const::FUEL_STEP;

    if ((curSpeed + Car_Const::ACC_STEP) >= Car_Const::MAX_SPEED)
    {
        curSpeed = Car_Const::MAX_SPEED;
        return;
    }

    curSpeed += Car_Const::ACC_STEP;
}
void Car::Break()
{
    if (curSpeed < Car_Const::BRK_STEP)
    {
        curSpeed = 0;
        return;
    }
    curSpeed -= Car_Const::BRK_STEP;
}

int main()
{
    Car run99 = {"run99", 100, 0};
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}
