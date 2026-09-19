#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    // Constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // Method to find area
    int area()
    {
        return length * breadth;
    }

    // Method to find perimeter
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    int l, b;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    Rectangle r(l, b);

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}