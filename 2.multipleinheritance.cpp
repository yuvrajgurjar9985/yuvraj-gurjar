#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "This is class A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "This is class B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;

    // Ambiguity occurs here
    // obj.show();

    // Resolving ambiguity using scope resolution
    obj.A::show();
    obj.B::show();

    return 0;
}