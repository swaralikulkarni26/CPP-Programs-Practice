//Write a program to accept a string and reverse it.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
cout<<"Enter string:"<<endl;
getline(cin, str);
cout<<"Reverse sring is:"<<endl;
for(int i=str.length();i>=0;i--){
    cout<<str[i];
}

    return 0;
}
/*Output:
Enter string:
abcdef 
Reverse sring is:
fedcba

*/