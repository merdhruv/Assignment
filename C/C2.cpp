//C2. Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
#include <string>
using namespace std;
//-------------------------------------------------------

//-------Library-------
class BankAccount{
    int accNum;
    int balance = 0;
public:
    void deposit(int n){
        try{
            this->balance += n;
            if(n < 0){
                throw(n);
            }
        }
        catch(int n){
            cout << "the value must be positive";
            exit(EXIT_FAILURE);
        }
    }
    void withdraw(int n){  
        try{     
            if(n < 0){      //exception thrown.
                throw(n);
            }                                            
            //if the amount to be withdrawn is greater then balance then invalid.
            if(n > balance){
                cout << "Sorry, you don't have enough balance" << endl;
                cout << "-----------------------------------------------"<<endl;
            }
            else{          //else withdraw the amount.
                this->balance -= n;
            } 
        } 
        catch(int n){
            cout << "the amount must be positive";
            exit(EXIT_FAILURE);
        }
    }
    void checkBalance(){
        cout << "your current balance is: "<< this->balance << endl; 
        cout << "-----------------------------------------------"<<endl;
    }
};




//-------Application-------

int main(){
    BankAccount b1;
    int token = 0;
    int ans = 0;
    cout << "Hello Sir, Welcome to SBI, what would you like us to do." << endl;
    while(0 == token){
        cout << "1 : Withdraw , 2 : Deposit , 3 : check Balance, 4 : Exit " << endl;
        cin >> ans;
        cout << endl;
        if(1 == ans){
            int amount = 0;
            cout << "How much would you like to Withdraw : ";
            cin >> amount;
            cout << endl;
            b1.withdraw(amount);
        }
        else if(2 == ans){
            int amount = 0;
            cout << "How much would you like to Deposit : ";
            cin >> amount;
            cout << endl;
            b1.deposit(amount);
        }
        else if(3 == ans){
            b1.checkBalance();
        }
        else if(4 == ans){                                      //setting token value to exit the while loop.
            token = 1;
        }
        else{
            cout << "Please select a Valid option" << endl;     //if any other input is given then show invalid.
        }
    }
   
}