// Write a program to accept a string and replace every vowel in the string with the '*' character.
#include <iostream>
using namespace std;
void replaceVowel(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            str[i] = '*';
        }
    }
    cout << "Replaced string is : " << str << endl;
}
int main()
{
    string str;
    cout << "Enter string:" << endl;
    cin >> str;

    replaceVowel(str);

    return 0;
}

/*Output:

Enter string:
swarali
Replaced string is : sw*r*l*

*/
