#include <iostream>
using namespace std;
class Shape
{
public:
    int a, b;
    void getData(int x, int y)
    {
        a = x;
        b = y;
    }
};
class Rectangle : public Shape
{
public:
    int rectArea()
    {
        return a * b;
    }
};
class Triangle : public Shape
{
public:
    int triArea()
    {
        return 0.5 * a * b;
    }
};

int main()

{
    int length, breadth, height;
    cout << "Enter the length, breadth, height:" << endl;

    cin >> length >> breadth >> height;
    Triangle t;
    t.getData(length, height);
    float triArea = t.triArea();
    cout << "Area of Triangle is : " << triArea << endl;
    Rectangle r;
    r.getData(length, breadth);
    float rectArea = r.rectArea();
    cout << "Area of rctangle is : " << rectArea << endl;

    return 0;
}
/*Enter the length, breadth, height:
10
20
30
Area of Triangle is : 150
Area of rctangle is : 200*/