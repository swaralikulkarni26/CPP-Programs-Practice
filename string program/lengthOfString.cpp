// Write a program to accept a string and calculate its length.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string whose length to be measured" << endl;
    cin>>str;
    cout<<"length of given string : " <<str<<" is :"<<str.size()<<endl;
   // cout<<"length of given string : " <<str<<" is :"<<str.length()<<endl;

    return 0;
}
/*output:
Enter the string whose length to be measured
swarali
length of given string : swarali is :7*/