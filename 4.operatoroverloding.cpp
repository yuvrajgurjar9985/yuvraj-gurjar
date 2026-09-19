#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;

public:
    Employee(int i, string n)
    {
        id = i;
        name = n;
    }

    friend ostream& operator<<(ostream& out, Employee e)
    {
        out << "Employee ID: " << e.id << endl;
        out << "Employee Name: " << e.name << endl;

        return out;
    }
};

int main()
{
    Employee e(101, "Rahul");

    cout << e;

    return 0;
}