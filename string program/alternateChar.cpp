// Write a program to accept a string and starting with first character replace every alternate character with the '*' character.

#include <iostream>
#include <string.h>

using namespace std;

void replacealternate(string &str)
{
    // ch="*";
    for (int i = 1; i < str.length(); i+2)
    {

        str[i] = '*';
    }
    cout << "The String is now (keeping first character and replacing alternate character by *) :" << str << endl;
}

int main()
{
    string str;
    cout << "Enter the string :" << endl;
    cin >> str;

    replacealternate(str);

    return 0;
}