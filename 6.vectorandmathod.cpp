#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // push_back()
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    for (int x : v)
    {
        cout << x << " ";
    }

    // size()
    cout << "\nSize = " << v.size() << endl;

    // front()
    cout << "Front element = " << v.front() << endl;

    // back()
    cout << "Back element = " << v.back() << endl;

    // at()
    cout << "Element at index 1 = " << v.at(1) << endl;

    // insert()
    v.insert(v.begin() + 1, 15);

    cout << "After insert: ";
    for (int x : v)
    {
        cout << x << " ";
    }

    // erase()
    v.erase(v.begin() + 1);

    cout << "\nAfter erase: ";
    for (int x : v)
    {
        cout << x << " ";
    }

    // pop_back()
    v.pop_back();

    cout << "\nAfter pop_back: ";
    for (int x : v)
    {
        cout << x << " ";
    }

    // clear()
    v.clear();

    cout << "\nSize after clear = " << v.size() << endl;

    return 0;
}