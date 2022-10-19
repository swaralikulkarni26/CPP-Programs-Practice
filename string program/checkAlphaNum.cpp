// Write a program to accept a string and check if all the characters in the string are alphanumeric.

#include <iostream>
using namespace std;

int main()
{
    char arr[100];
    cout << "Enter string:" << endl;
    cin.get(arr,100);
    for (int i = 0; arr[i]!='\0'; i++)
    {
        if (isalnum(arr[i]))
        {
            cout << "Given string isalpanumeric" << endl;
        }
        else

        cout << "Given string is not all alpanumeric." << endl;

        return 0;
    }
}

    /* Output:
    Enter string:
sw12
Given string contains all alpanumeric value*/