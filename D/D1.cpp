//  D1. Write a C++ program to implement a stack using an array with push and pop operations. Check if the stack is full.
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
using namespace std;
//-------------------------------------------------------

//-------Library-------
class ArrStack{                             //two sizes are declared.
    int totalsize = 0;                      //one is the total size of stack.
    int size = 0;                           //another is current size of the stack.
    int arr[];
public:
    void setSize(int &x){               
        size = x;           
        totalsize = x;
    }
    void getSize(){
        if(size == 0){cout << "size is 0" << endl;}             //if no elements then size  = 0. 
        else{
            cout<<"size of stack is " << this->size << endl;    // else return the size.
        }
    }
    void push(int *a){                                          //takes array as an input.
        for(int i = 0; i < this->size; i++){                    //loops till the size of stack.
            this->arr[i] = a[i];
        }
    }
    void display(){
        cout << "The Current Stack is : ";
        for(int i = 0; i < this->size; i++){
            cout << this->arr[i] <<" ";
        }
        cout << endl;
    }
    void pop(){       
        cout << "Element to be removed : "<< arr[0] << endl;
        size -= 1;                                                //decrease the current size of the stack.
        for(int i = 0; i < this->size; i++){
            this->arr[i] = this->arr[i+1];
        }
    }
    void isFull(){
        if(size == totalsize) cout << "The stack is full"<< endl; // if totalsize == current size of the stack then return true.
        else cout << "The Stack is not full. " << endl;
    }
  
    

};


//-------Application-------

int main(){
    ArrStack st;
    int size = 0;

    cout << "Enter the size of the Stack : ";
    cin >> size;
    int a[size];

    cout << endl;
    st.setSize(size);
    st.getSize();
    cout << "Insert some elements into stack : " << endl;
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
    st.push(a);
    st.display();
    st.isFull();

    st.pop();
    st.display();
    st.isFull();
}
