#include <iostream>
using namespace std;
int main()
{
    //Sum of element in Array....
    int sum = 0;
    int arr[5] = {1, 2, 3, 6, 5};
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;

    return 0;
}

/*Output:17*/