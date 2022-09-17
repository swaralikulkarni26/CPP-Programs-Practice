// Largest Element in Array:::::
#include <iostream>
using namespace std;

int main()
{
    int temp;
    int arr[] = {5, 4, 6, 7, 2, 13};
    int max = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (max < arr[i])
        {
            temp = max;
            max = arr[i];
            arr[i] = temp;
        }
    }

    cout <<"Largest Element is :"<< max;

    return 0;
}

/*Output: Largest Element is :13 */