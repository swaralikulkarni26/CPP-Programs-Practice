// Write a program to accept a string STR1, starting position P and length L.
// Extract from the given string STR, starting from position P, L characters into another string STR2.
//  e.g. STR1="BATATA", P=2, L=4. Then STR2="ATAT".
#include <iostream>
#include <string>
using namespace std;
void takeposs(string str, int pos, int len)
{
    cout << "Output string is :" << endl;
    for (int i = pos - 1; i <= len; i++)
    {
        cout << str[i];
    }
}
int main()
{
    string str;
    int pos, length;
    cout << "Enter string:" << endl;
    cin >> str;
    cout << "Enter Position:" << endl;
    cin >> pos;
    cout << "Enter length:" << endl;
    cin >> length;
    takeposs(str, pos, length);

    return 0;
}
/*
Enter string:
BATATA
Output string is :
ATAT
*/