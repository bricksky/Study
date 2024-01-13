#include <iostream>
using namespace std;

class Calculator
{
private:
    int numOfAdd;
    int numOfMin;
    int numOfMul;
    int numOfDiv;

public:
    void Init();
    double Add(double num1, double num2);
    double Min(double num1, double num2);
    double Mul(double num1, double num2);
    double Div(double num1, double num2);
    void ShowOpCount();
};

void Calculator::Init()
{
    int numOfAdd = 0;
    int numOfMin = 0;
    int numOfMul = 0;
    int numOfDiv = 0;
}
double Calculator::Add(double num1, double num2)
{
    numOfAdd++;
    return num1 + num2;
}
double Calculator::Min(double num1, double num2)
{
    numOfMin++;
    return num1 - num2;
}
double Calculator::Mul(double num1, double num2)
{
    numOfMul++;
    return num1 * num2;
}
double Calculator::Div(double num1, double num2)
{
    numOfDiv++;
    return num1 / num2;
}

void Calculator::ShowOpCount()
{
    cout << "덧셈: " << numOfAdd << ' ';
    cout << "뺄셈: " << numOfMin << ' ';
    cout << "곱셈: " << numOfMul << ' ';
    cout << "나눗셈: " << numOfDiv << endl;
}

int main()
{
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 - 1.4 = " << cal.Div(3.2, 2.4) << endl;
    cout << "2.2 * 1.5 = " << cal.Min(3.2, 2.4) << endl;
    cout << "4.9 / 1.2 = " << cal.Div(3.2, 2.4) << endl;
    cal.ShowOpCount();
    return 0;
}