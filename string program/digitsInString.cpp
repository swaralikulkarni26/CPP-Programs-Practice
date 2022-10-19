// Write a program to accept a string and check if all the characters in the string are digits.
#include <iostream>
using namespace std;
bool isDigits(string str)
{
    int count=0;
    for (int i = 0; i < str.length(); i++)
    {

        if (!str[i] >= '0' && str[i] <= '9')
         count++;
    }
    if (count==str.length()){
        return true;
    }
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    cin >> str;
    if (isDigits(str))
    {
        cout << "Given string contains all Digits" << endl;
    }
    else
    {
        cout << "Given string contains not all Digits" << endl;
    }

    return 0;
}

/* Output:
Enter string:
swa12
Given string contains not all Digits*/