#include <iostream>
using namespace std;
// template Example.......
template <class X, class Y>
void fun(X a, Y b)
{
    cout << "value of a is : " << a << endl;
    cout << "value of b is : " << b << endl;
}

int main()
{

    fun(10, 1.5);

    return 0;
}
/*Output: 
value of a is : 10
value of b is : 1.5*/