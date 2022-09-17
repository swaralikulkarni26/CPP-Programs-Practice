#include <iostream>
using namespace std;
int main()
{
    //Binary Search
    int key, l = 0, h = 7;
    int arr[] = {2, 4, 5, 7, 9, 11, 12, 15};
    cout << "Enter the element to search : " << endl;
    cin >> key;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == arr[mid])
        {
            cout << "key found at: " << mid << endl;
            return 0;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout<<"not found"<<endl;

    return 0;
}

/* Output: Enter the element to search : 
7
key found at: 3*/