#include<iostream>
using namespace std;
int main(){

char s[50];
char s2[50];
cout<<"Enter your name"<<endl;
cin.get(s,50);
cout<<"Welcome "<<s<<endl;
cin.ignore();

cout<<"Enter your name again";
cin.get(s2,50);
cout<<"Welcome "<<s2<<endl;

    return 0;
}