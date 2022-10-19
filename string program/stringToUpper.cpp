//Write a program to accept a string and convert all its characters to upper case.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter string:" << endl;
    cin >> str;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<"String to Upper:"<<endl;
    cout<<str;


    return 0;
}
/*
Output:
Enter string:
swarali
String to Upper:
SWARALI*/