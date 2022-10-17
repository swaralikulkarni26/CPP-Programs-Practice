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
    int length, breadth, height, base;
    Triangle t;
    cout<<"Enter base and height of triangle: "<<endl;
    cin>>base>>height;
    t.getData(base, height);
    float triArea = t.triArea();
    cout << "Area of Triangle is : " << triArea << endl;
    Rectangle r;
    cout<<"Enter length and breadth of Rectangle: "<<endl;
    cin>>length>>breadth;
    r.getData(length, breadth);
    float rectArea = r.rectArea();
    cout << "Area of rctangle is : " << rectArea << endl;

    return 0;
}
/*Enter base and height of triangle: 
10
20
Area of Triangle is : 100
Enter length and breadth of Rectangle:
10
20
Area of rctangle is : 200*/