#include <iostream>
using namespace std;

template <class T>
T add(T &a, T &b)
{
    int result = a + b;
    return result;
}

int main()
{
    int i = 2;
    int j = 5;
    float m = 10.5;
    float n = 15.6;

    cout << add(i, j) << endl;
    cout << add(m, n) << endl;

    return 0;
}
/* Output: 7
26*/