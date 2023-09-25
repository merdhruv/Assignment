//  D4. Implement linked list working like Stack.
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
using namespace std;
//-------------------------------------------------------

//-------Library-------
class Node{
    int val;
public:
    Node *next;
    Node(int x = 0, Node *next =nullptr) : next(next) {
        try{
            val = x;
            if(x < 0){
                throw(x);
            }
        }
        catch(int x){
            cout << "the value of the node must be positive";
            exit(EXIT_FAILURE);
        }
    }
    int getVal(){
        return this->val;
    }
};
class stackLL{
    Node* head;
public:
    stackLL() :head(nullptr){}
    //function to push data on stack.
    void push(int val){
        try{
            head = new Node(val , head);
        }
        catch(bad_alloc err){
            cout << "low memory" << endl;
        }
    }
    //function to pop from top of the stack.
    void pop(){
        if(head){
            Node *temp = head;
            head = head->next;  //head now points to next node.
            temp->next = nullptr;
            delete temp;
            temp = nullptr;
        }
        else{
            cout << "No elements to pop." << endl;
        }
    }
    // function to get the top element.
    void top(){
        cout << "the top value is : " << head->getVal() << endl;
    }
    void display(){
        cout << "the current stack is: " << endl;
        Node *temp = head;
        if(temp){
            while(temp){                        //traversing temp till it becomes null.
                cout << temp->getVal() << " ";
                temp = temp->next;
            }
            delete(temp);
            cout << endl;
        }
        else{
            cout << "No elements to show";
        }
        
    }
};


//-------Application-------

int main(){
    stackLL st;
    int token = 0;
    int ans = 0;
    while(0 == token){
        cout<<"1 : push, 2 : pop, 3 : display, 4 : top, 5 : exit " << endl;
        cin >> ans;
        if(1 == ans){
            int val=0;
            cout << "Enter data to be pushed" << endl;
            cin >> val;
            st.push(val);
        }
        else if(2 == ans){
            st.pop();
        }
        else if(3 == ans){
            st.display();
        }
        else if(4 == ans){
            st.top();
        }
        else if(5 == ans){                                  //setting token value to exit while loop.
            token = 1;
        }
        else{
            cout << "Please select a valid option" << endl; //if any other input is given show invalid.
        }
    }
}
