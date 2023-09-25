// E1. Support following operators to be overloaded for Complex numbers :
// 	a. Subtraction.
// 	b. Multiplication.
// 	c. pre and post decrement.
// 	d. Display Complex number. 

// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
using namespace std;
//-------------------------------------------------------

//-------Library-------
class Complex{
    int real;
    int img;
public:
    Complex(int x=0, int y=0){
        real = x;
        img = y;
    }
    
    void display(){                         //displays the Complex Number.
        cout << real << " + i" << img << endl;
    }

    Complex operator- (Complex &c1){ //subtracts two complex numbers.
        Complex c3;
        cout << "The Subtraction of these numbers is:\n";
        c3.real  = real - c1.real;
        c3.img = img - c1.img;
        return c3;
    }
    Complex operator*(Complex &c1){//multiplies two complex numbers.
        Complex c3;
        cout << "The multiplication of these numbers is:\n";
        c3.real  = (real * c1.real) - (img * c1.img);
        c3.img = (real * c1.img) + (img * c1.real);
        return c3;
    }
    void operator--(){ // pre decrement
        real --;
        img -- ;
        this->display();
        cout << "pre decreament called\n";
    }
    void operator--(int){ // post decrement
        real --;
        img -- ;
        this->display();
        cout << "post decreament called\n";
    }
    
};



//-------Application-------

int main(){
    Complex c1(7,8);
    Complex c2(5,6);
    
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    Complex c3 = c1 - c2;
    cout << "c1 - c2 = " ;
    c3.display();
    c1--;
    cout << "c1-- = ";
    --c2;
    cout << "--c2 = ";
    Complex c4 = c1 * c2;
    cout << "c1 * c2 = ";
    c4.display();

}