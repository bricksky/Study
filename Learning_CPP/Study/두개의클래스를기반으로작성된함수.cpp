#include <iostream>
using namespace std;

class PermanentWorker
{
private:
    char name[100];
    int salary;

public:
    PermanentWorker(char *name, int money)
        : salary(money)
    {
        strcpy(this->name, name);
    }
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        cout << "name: " << name << endl;
        cout << "salary " << salary << endl;
    }
};

class EmployeeHandler
{
private:
    PermanentWorker *emplist[50];
    int empNum;

public:
    EmployeeHandler() : empNum(0)
    {
    }
    void AddEmployee(PermanentWorker *emp)
    {
        emplist[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {
        for (int i = 0; i < empNum; i++)
            emplist[i]->ShowSalaryInfo();
    }
    void ShowTotalSalary() const
    {
        int sum = 0;
        for (int i = 0; i < empNum; i++)
            sum += emplist[i]->GetPay();
        cout << "salary sum: " << sum << endl;
    }
    ~EmployeeHandler()
    {
        for (int i = 0; i < empNum; i++)
            delete emplist[i];
    }
};

int main()
{
    EmployeeHandler handler;

    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1000));
    handler.AddEmployee(new PermanentWorker("JUN", 1000));

    handler.ShowAllSalaryInfo();

    handler.ShowTotalSalary();
    return 0;
}