#include <iostream>
using namespace std;
#include <string>
#include <fstream>
class Address
{
public:
    string addressLine, city, state, pincode;

public:
    Address(string addressLine, string state, string city, string pincode)
    {
        this->addressLine = addressLine;
        this->state = state;
        this->city = city;
        this->pincode = pincode;
    }
};
class Employee
{
    Address *address;
    int id;
    string name;

public:
    Employee(int id, string name, Address *address)
    {
        this->id = id;
        this->name = name;
        this->address = address;
    }

    void display()
    {
       // fstream f;
       // f.open("D:\\ReadFile.txt");

      // f << "Employee Name:" << name << "\nEmployee Id: " << id << "\nEmployee Address: " << address->addressLine << "\n State: " << address->state << "\nCity: " << address->city << "\nPincode: " << address->pincode << endl;
    cout << "Employee Name:" << name << "\nEmployee Id: " << id << "\nEmployee Address: " << address->addressLine << "\n State: " << address->state << "\nCity: " << address->city << "\nPincode: " << address->pincode << endl;
    }
};

int main()
{
    int empId;
    string addressLine, state, city, empName, pincode;
    cout << "Enter address Line1:";
    getline(cin, addressLine);
    cout << "Enter state:";
    cin >> state;
    cout << "Enter City:";
    cin >> city;
    cout << "Enter pincode:";
    cin >> pincode;
    Address a1 = Address(addressLine, state, city, pincode);
    cout << "Enter Empoyee ID:";
    cin >> empId;
    cout << "Employee Name:";
    cin >> empName;
    Employee e1 = Employee(empId, empName, &a1);
    e1.display();
    return 0;
}

/*Enter address Line1:dange chowk
Enter state:MH
Enter City:PUNE
Enter pincode:411033
Enter Empoyee ID:1
Employee Name:swarali
Employee Name:swarali
Employee Id: 1
Employee Address: dange chowk
 State: MH
City: PUNE
Pincode: 411033*/