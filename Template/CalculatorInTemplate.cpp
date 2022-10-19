#include <iostream>
using namespace std;
template <class T>
class Calculator
{

    T num1, num2;

public:
    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void display()
    {

        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << sub() << endl;
        cout << num1 << " * " << num2 << " = " << mul() << endl;
        cout << num1 << " / " << num2 << " = " << div() << endl;
    }

    T add()
    {
        return num1 + num2;
    }
    T sub()
    {
        return num1 - num2;
    }
    T mul()
    {
        return num1 * num2;
    }
    T div()
    {
        return num1 / num2;
    }
};

int main()
{
    cout << "Operations on Integers:" << endl;
    Calculator<int> calInt(10, 20);
    calInt.display();
    cout << "Operations on Float:" << endl;
    Calculator<float> calFloat(10.5, 11.4);
    calFloat.display();

    return 0;
}

/*Output:

Operations on Integers:
10 + 20 = 30
10 - 20 = -10
10 * 20 = 200
10 / 20 = 0
Operations on Float:
10.5 + 11.4 = 21.9
10.5 - 11.4 = -0.9
10.5 * 11.4 = 119.7
10.5 / 11.4 = 0.921053
*/