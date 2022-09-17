#include<iostream>
using namespace std;

int main(){
int a[]={10,20,50};
int *ptr;
ptr=a;
for(int i=0;i<3;i++){

    cout<<"value of ptr is:"<<ptr<<endl;
    cout<<"value of *ptr is:"<<*ptr<<endl;
    ptr++;
}
for(int i=3;i>=0;i--){

    cout<<"value of ptr is:"<<ptr<<endl;
    cout<<"value of *ptr is:"<<*ptr<<endl;
    ptr--;
}
    return 0;
}
/*Output: value of ptr is:0x61fef8
value of *ptr is:10
value of ptr is:0x61fefc
value of *ptr is:20
value of ptr is:0x61ff00
value of *ptr is:50
value of ptr is:0x61ff04
value of *ptr is:3
value of ptr is:0x61ff00
value of *ptr is:50
value of ptr is:0x61fefc
value of *ptr is:20
value of ptr is:0x61fef8
value of *ptr is:10*/