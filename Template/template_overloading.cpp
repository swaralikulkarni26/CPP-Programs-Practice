#include <iostream>
using namespace std;

// template overloading.......
template <class T>
T fun(T x)
{
    cout << "This is value of x :" << x << endl;
}
template <class T, class U>
void fun(T t, U u)
{

    cout << "This is value of t" << t << " and  " << u << endl;
}
int main()
{

    fun(10);
    fun(10.5);
    fun(10, 10.5);

    return 0;
}

/*This is value of x :10
This is value of x :10.5
This is value of t10 and  10.5*/