// F2. C++ program to demonstrate example of hierarchical inheritance to get square and cube of a number.

// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
using namespace std;
//-------------------------------------------------------

//-------Library-------

class Number{
    int num;
public:
    void setNumber(){
        cout << "Enter a number : ";
        cin >> num;
    }
    int getNumber(){
        return num;
    }
};
//Derived Square class from Number class publicly.
class Square : public Number{
public:
    int getSquare(){
        int n = getNumber();
        return n*n;
    }
};
//Derived Cube class from Number class publicly.
class Cube : public Number{
public:
    int getCube(){
        int n = getNumber();
        return n*n*n;
    }
};


//-------Application-------

int main(){
    Square sobj;
    Cube cobj;

    sobj.setNumber();
    int sq = sobj.getSquare();
    cout << "The Square of given number is : " << sq << endl;

    cobj.setNumber();
    int cb = cobj.getCube();
    cout << "The Cube of given number is : " << cb << endl;

}