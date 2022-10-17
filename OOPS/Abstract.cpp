#include <iostream>
using namespace std;

class Sum
{
    int num1, num2;
    int num3=0;

public:
    void sum()
    {
        cout << "Enter 2 numbers : " << endl;
        cin >> num1 >> num2;
        num3 = num1 + num2;
        cout << "sum of Two Numbers is : " << num3 << endl;
    }
};
int main()
{
    Sum s;
    s.sum();
    return 0;
}



/*Enter 2 numbers : 
10
20
sum is of two numbers is : 30*/