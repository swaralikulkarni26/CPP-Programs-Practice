#include <iostream>
using namespace std;
class Animal
{

public:
    void eat()
    {
        cout << "I am Animal.\nI like to eat Biscuits" << endl;
    }
};
class Dog : public Animal
{
    string name = "Bingo";

public:
    void bark()
    {
        cout << "I am barking dog." << endl;
        cout << "my name is " << name << endl;
    }
};
class BabyDog : public Dog
{
public:
    void sleep()
    {
        cout << "I am Baby Dog.\n I love my Mommy." << endl;
    }
};
int main()
{
    BabyDog jj;
    jj.eat();
    jj.bark();
    jj.sleep();
    return 0;
}
/*I am Animal.
I like to eat Biscuits
I am barking dog.
my name is Bingo
I am Baby Dog.
 I love my Mommy.*/