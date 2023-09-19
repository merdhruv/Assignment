// A2. Write a program in C++ to display n terms of natural numbers and their sum.
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
using namespace std;
//-------------------------------------------------------
//-------Library-------

void sumOfTerms(int &n){
    int sum = 0;
    cout << "The Natural numbers upto "<<n<<"th term are:" << endl;
    for(int i = 1; i<=n; i++){
        sum += i;
        cout << i <<" ";
    }
    cout << endl << "The sum of the natural numbers is : " << sum;
}



//-------Application-------
int main(){
    int n;
    cout << "Input the Number of terms : ";
    cin >> n;
    cout << endl;
    sumOfTerms(n);
}