#include <iostream>
using namespace std;

class SinivelCap
{
public:
    void Take() const { cout << "콧물이 싹 납니다." << endl; }
};

class SneezeCap
{
public:
    void Take() const { cout << "재채기가 멈춥니다." << endl; }
};

class SnuffCap
{
public:
    void Take() const { cout << "코가 뻥 뚤립니다." << endl; }
};

class ColdPatient
{
public:
    void TakeSinivelCap(const SinivelCap &cap) const { cap.Take(); }
    void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
    void TakeSnuffCap(const SnuffCap &cap) const { cap.Take(); }
};

int main()
{
    SinivelCap scap;
    SneezeCap zcap;
    SnuffCap ncap;

    ColdPatient suffer;
    suffer.TakeSinivelCap(scap);
    suffer.TakeSneezeCap(zcap);
    suffer.TakeSnuffCap(ncap);
}