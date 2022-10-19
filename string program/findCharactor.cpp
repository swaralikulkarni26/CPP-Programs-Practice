// Write a program to accept a string and a position P. Print the character at position P in the string.
#include <iostream>
using namespace std;
char printchar(string str, int pos)
{
    for (int i = 0; i <= str.length(); i++)
    {
        if (pos == i)
        {
            return str[i];
        }
    }
}
int main()
{
    string str;
    int position;
    cout << "Enter the string:" << endl;
    cin >> str;
    cout << "Enter the possition:" << endl;
    cin >> position;
    char chAtPosition = printchar(str, position);
    cout << "Char at " << position << " position is: " << chAtPosition << endl;

    return 0;
}


/*
Output:
Enter the string:
swarali
Enter the possition:
3
Char at 3 position is: r*/