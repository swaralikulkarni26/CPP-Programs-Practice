// Write a program to accept a string and check if all the characters in the string are alphabets.
#include <iostream>
using namespace std;
bool isAlpha(string str)
{
    for (int i = 0; i < str.length(); i++)
    {

        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            return true;
        return false;
    }
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    cin >> str;
    if (isAlpha(str))
    {
        cout << "Given string contains all alphabates" << endl;
    }
    else
    {
        cout << "Given string contains not all alphabates" << endl;
    }

    return 0;
}

/*Output:

Enter string:
12swa
Given string contains not all alphabates*/