// Write a program to accept a string, a position P and a character T. Replace the character at position P in the string with character T.
#include <iostream>
#include <string>
using namespace std;
string replaceCharByT(string str, int pos, char ch)
{
    for (int i = 0; i <= str.length(); i++)
    {
        if (pos == i)
        {
            str[i] = ch;
        }
        return str;
    }
}
int main()
{
    string str;
    int position;
    char t;
    cout << "Enter the string:" << endl;
    cin >> str;
    cout << "Enter the possition:" << endl;
    cin >> position;
    cout << "Enter the char by which the given position char will be replaced:" << endl;
    cin >> t;

    string finalstring = replaceCharByT(str, position, t);
    cout << "Char at " << position << " position is "
         << " replaced by " << t << " . Final string is : " << finalstring << endl;

    return 0;
}
/*Output:
Enter the string:
swarali
Enter the possition:
0
Enter the char by which the given position char will be replaced:
S
Char at 0 position is replaced by S. Final string is : Swarali*/
