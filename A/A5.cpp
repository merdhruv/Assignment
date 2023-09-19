// A5. Write a C++ program with following options:
// 	a. Find a number is Shakuntala Devi's number or not. Ex: 145
// 	b. Find range of Shakuntala Devi's numbers. Ex: between 1 to 1000 is : 1, 2, 145 
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
using namespace std;
//-------------------------------------------------------

//-------Library-------
int fact(int n) {
  if(n > 1)
    return n * fact(n - 1);
  else
    return 1;
}
void deviNumber(int &n){
    if(1 == n || 2 == n) cout << "The number entered is Shakuntala Devi's number.";
    else{
        int num = n;    //a copy of input is created to modify the input.
        int sum = 0;
        while(num>0){
            int temp = num % 10;        //unit's place of the digit is taken. eg = 145 , temp = 5
            sum += fact(temp);          //factorial of that digit is added to the sum. eg =  sum + = 120
            num = num/10;               //unit's place is removed from the number. eg = 145 => 14.
        }
        if(sum == n) cout << "The number entered is Shakuntala Devi's number.";
        else cout << "The number entered is not Shakuntala Devi's number.";
    }   
}


//-------Application-------

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n; 
    cout << endl;
    deviNumber(n);
}