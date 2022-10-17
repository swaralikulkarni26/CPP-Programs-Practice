#include<iostream>
#include<map>
using namespace std;

class Account{
    long account_no;
    string firstName, lastName;
    float balance;
    static long nextAccountNo;
    public:
    long getAcctNo(){return account_no;}
    string getfName(){return firstName;}
    string getlName(){return lastName;}
    float getBalace(){return balance;}
     void deposit(float amount);
     void withdraw(float amount);

     static void setLastAcctNo(long accno);
     static long getLastAccno();
     
};
long Account::nextAccountNo=0; 

class Bank{
    private:
    map<long , Account> accounts;

    Account openAccount(string fName, string lName, float balance);
    void withdraw(long accNo, float balance) ;
    void deposit(long accNo, float balance);
    void closeacc(long accNo);
    void showAllAccounts();

};
int main(){

    int choice;

    do{
        cout<<"*****Banking Syste*****"<<endl;
        cout<<"\nSelect one option below:";
        cout<<"\n1.Open an account";
        cout<<"\n2.Balance Enquary";
        cout<<"\n3.Deposit";
        cout<<"\n4.Wihdraw";
        cout<<"\n5.close an account";
        cout<<"\n6.show all account";
        cout<<"\n7.Quit";

        switch(choice)
        { 
            case 1:
        break;





          

        }



    }while(choice!=7);


    return 0;
}
Account::Account(string fName, string lName, float balance){
 nextAccountNo++;
 account_no=nextAccountNo;
 firstName=fName;
 lastName=lName;
 this->balance=balance;

}
void Account::deposit(float amount){
    balance+=amount;
    }
void Account::withdraw(float amount){

    if((balance-amount)<Min_BAL){
        throw InsufficientFunds();
        balance-=amount;

    }
}
