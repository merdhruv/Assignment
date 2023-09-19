// A4. Write a C++ program that displays the pattern like a pyramid using asterisks, with odd numbers in each row.
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
using namespace std;
//-------------------------------------------------------
//-------Library-------

void pattern(int &n){ 

    // Diamond Pattern.
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        for(int j = 0; j < (2*i)-1; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j <2*(n-i)-1; j++){
            cout << "*";
        }
        cout << endl;
    }

    //Hallow DIamond Pattern. 
    cout << endl;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            cout << "*";
        }
        for(int j = 1; j <= (2*i-2); j++){
            cout << " ";
        }
        for(int j = i; j <= n; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        for(int j=(2*i-2); j<(2*n-2); j++){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout << endl;
        }
    
}


//-------Application-------
int main(){
    int n;
    cout << "Input the number of rows : ";
    cin >> n;
    pattern(n);
}