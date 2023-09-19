// A3. Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
using namespace std;
//-------------------------------------------------------
//-------Library-------

void seriesSum(int &n){
    int sum = 0, temp = 0;  // Created a temperary sum to print sum of the ith term.
    for(int i = 1; i <= n; i++){
        temp = 0;           // setting temp sum to 0 at begining of the loop.
        for(int j = 1; j <= i; j++){
            sum += j;
            temp += j;
            cout << j;
            if(j<i){
                cout << " + " ;
            }
        }
        cout << " = " <<temp<<endl;
    }
    cout << "the sum of the above series is: "<<sum;
}


//-------Application-------
int main(){
    int n;
    cout << "Input the value for nth term : ";
    cin >> n;
    cout << endl;
    seriesSum(n);
}