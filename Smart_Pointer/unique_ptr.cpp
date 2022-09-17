#include <iostream>
#include <memory>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {

        return length * breadth;
    }
};
int main()
{
    unique_ptr<Rectangle> p1(new Rectangle(10, 20));
    cout << p1->area()<<endl;
    unique_ptr<Rectangle> p2;
    p2 = move(p1);
    cout<<p2->area();

    return 0;
}

/*Output: 200
200*/