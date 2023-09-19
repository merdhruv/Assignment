// A1. Write a program in C++ to find the first 10 natural numbers.
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
using namespace std;
//-------------------------------------------------------

//-------Library-------

void first10Natural(){
    cout << "The natural numbers are" << endl;
    for(int i = 1; i <= 10; i++){
        cout << i << " ";
    }

}
//-------Application-------

int main(){
    first10Natural();
}