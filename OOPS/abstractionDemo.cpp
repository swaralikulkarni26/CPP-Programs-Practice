#include <iostream>
using namespace std;

class Shape
{

protected:
    float dimentions;

public:
    void getdimentions()
    {
        cin >> dimentions;
    }

    virtual float calculateArea() = 0;
};

class Circle : public Shape
{
public:
    float calculateArea()
    {
        return 3.14 * dimentions * dimentions;
    }
};
class Square : public Shape
{
public:
    float calculateArea()
    {
        return dimentions * dimentions;
    }
};

int main()
{

    Circle c;
    cout << "Enter radious of Circle" << endl;
    c.getdimentions();
    cout << "Area of Circle is: " << c.calculateArea() << endl;
    Square s;
    cout << "Enter the side of Square" << endl;
    s.getdimentions();
    cout << "Area of Square is :" << s.calculateArea() << endl;

    return 0;
}
