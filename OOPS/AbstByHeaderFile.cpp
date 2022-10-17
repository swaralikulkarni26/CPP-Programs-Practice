//Abstraction by header File
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    int power;
    cout<<"Enter the power: "<<endl;
    cin>>power;

cout<<"Power of the given number is :  "<<pow(num, power)<<endl;
    return 0;

}
/*Enter the number: 
2
Enter the power: 
5
Power of the given number is :  32*/