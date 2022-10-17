#include<iostream>
#include<cstring>
using namespace std;
int main(){

  /*  char s[50];
    char s2[50];
    cout << "Enter your name" << endl;
    cin.get(s, 50);
    cout << "Welcome " << s << endl;
    cin.ignore();

    cout << "Enter your name again";
    cin.get(s2, 50);
    cout << "Welcome " << s2 << endl;*/
   /* char *s; 
    cout<<"Enter the string\n";
   // cin.getline(s,25);
    //cin>>s;
    cout<<"length of string is : "<<strlen(s)<<endl;*/
    /*char s1[10]="Good";
    char s2 [20]=" Morning";
    strcat(s1,s2);
    cout<<s1;
    cout<<strncat(s1,s2, 2);*/
    char s1[10]="245";
    char s2[20]="50.12";
   long x= strtol(s1,NULL,10);
   float y=strtof(s2, NULL);
   cout<<x<<endl<<y<<endl;
   cout<<x+10<<endl<<y+10<<endl;



    return 0;
}