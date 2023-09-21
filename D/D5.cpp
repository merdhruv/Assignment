//  D5. Add two hugh positive numbers using linked list.
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
using namespace std;
//-------------------------------------------------------

//-------Library-------
class Node{
public:
    int val;
    Node *next;
    Node(int x = 0, Node *next =nullptr) : val(x), next(next) {}
    int getVal(){
        return this->val;
    }
};

Node* addTwoNumbers( Node* l1, Node* l2){   //Function to add two numbers represented by Linked List.
    Node *dummy = new Node();
    Node *temp = dummy;
    int ans = 0;
    int carry = 0;
    while(l1 || l2 || carry){       //traversing till both linked list or carry exists. 
        int sum=0;
        if(l1){
            sum+=l1->val;
             l1=l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2=l2->next;
        }
        sum+=carry;                     //adding carry value to the sum as well
        carry = sum/10;                 //asigning new value to carry. 
        Node *node = new Node(sum%10);  //storing only the units place digit of the sum.
        temp->next = node;              //adding that node to existing node.
        temp = temp->next;
    }
    return dummy->next;
}

Node* numToLL(int sum){         //function to convert a number to Linked List.
    Node* Head = new Node();
    int remainder = sum % 10;   
    Head->val = remainder;      //storing unit place value in HEAD.
    sum = sum / 10;             //removing units place from number.
    Node* head;                 
    head = Head;
    while (sum != 0){               //traversing through the number and storing each place value.
        Node* nextNode = new Node();
        int remainder = sum % 10;            
        nextNode->val = remainder;      
        head->next = nextNode;
        head = nextNode;
        sum = sum / 10;
    }
    return Head;    
}
int llToNum(Node*l1){           //function to convert Linked List back to Number.
    int ans = 0;
    int mul = 1;
    while(l1){
        ans += l1->val * mul;   //multipling each digit with its decimal place and adding it to ans.
        mul *= 10;
        l1 = l1->next;
    }
    return ans;
}

//-------Application-------

int main(){
    int a,b;
    Node *l1, *l2;
    cout << "Enter two numbers :" << endl;
    cin >> a >> b;
    l1 = numToLL(a);
    l2 = numToLL(b);

    cout << "Sum of these numbers : " << llToNum(addTwoNumbers(l1, l2));

    
}
