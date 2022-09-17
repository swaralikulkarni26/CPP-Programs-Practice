#include <iostream>
using namespace std;
//Template class Example......
template <class T>
class A
{
public:
    T num1;
    T num2;
    void fun(T num1, T num2)
    {

        cout << "Addition of num 1 nd num 2 is " << num1 + num2 << endl;
    }
};
int main()
{
    A<int> obj;
    obj.fun(10, 12);

    return 0;
}
/*Output:  Addition of num 1 nd num 2 is 22*/