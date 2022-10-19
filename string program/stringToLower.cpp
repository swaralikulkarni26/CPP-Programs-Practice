//Write a program to accept a string and convert all its characters to Lower case.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter string:" << endl;
    cin >> str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<"String to Lower:"<<endl;
    cout<<str;


    return 0;
}
/*
Output:
Enter string:
SWARALI
String to Lower:
swarali*/