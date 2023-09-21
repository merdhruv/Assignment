//  D3. Implement linked list working like Queue.
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
    Node(int x = 0, Node *next =nullptr) : val(x), next(next) {}
    int getVal(){
        return this->val;
    }
};

class QueueLL{
    Node *front, *rear;
public:
    QueueLL(){
        front = nullptr;
        rear = nullptr;
    }
    void enQueue(int val){
        Node*temp;
        try{                       //try catch bad allocation error.
            temp = new Node(val); //create a new Node.
        }
        catch (bad_alloc err) {
		cout << "Low memory" << endl;
	}
        if(rear == nullptr){        //if queue is empty 
            front = temp;           //new node is both front and rear.
            rear = temp; 
        }
        rear->next = temp;          //put the new node at the end. 
        rear = temp;                //change rear to temp.
    }
    void deQueue(){
        if(front == nullptr){ return; } //if queue is empty return.

        Node* temp = front;             //store front 
        front = front->next;            //and move front to its next.

        if(front == nullptr) rear = nullptr; //if front becomes null then change rear to null.
        delete(temp);
    }
    void display(){
        cout << "The current queue is: "<<endl;
        if(front == rear){                      //if only one element.
            cout << front->getVal() << endl;
        }
        else{
            Node* temp = front;                 //if multiple elements.
            while(temp!=nullptr){
                cout << temp->getVal() << " ";
                temp = temp->next;
            }
        }
        
    }
};


//-------Application-------

int main(){
    QueueLL head ;
    head.enQueue(10);
    head.enQueue(20);
    head.enQueue(30);

    head.display();

    head.deQueue(); //removing front element from queue.
    
    head.display();
    
    
}
