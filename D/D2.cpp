// D2.  Write a C++ program to find the mean, variance and standard deviation of all elements of a queue.
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
#include <math.h>
using namespace std;
//-------------------------------------------------------

//-------Library-------
class queue{
    int *arr;
    int front;
    int rear;
    int size;
    int count;

public:
    queue(int num) {
        arr[num];
        size = num;
        front = 0;
        rear = -1;
        count = 0;
    }
    ~queue(){
        delete [] arr;
    }

    bool isEmpty(){
        return (count == 0);
    }
    bool isFull(){
        return (size == count);
    }
    int dequeue(){
        if(isEmpty()){
            cout << "no elements to dequeue \n";
        }
        int x = arr[front];
        front = (front+1) ;
        count--;

        return x;
    }
    void enqueue(int i){
        if(isFull()){
            cout << "The queue is Full \n";
        }
        rear = (rear+1);
        arr[rear] = i;
        count ++;
    }
    int average(){
        int sum = 0;
        for(int i = 0; i <= count; i++){
            sum += arr[i];
        }
        cout << "The Average of the queue elements : " << sum/count << endl;
        return sum/count;
    }
    int variance(){
        int sum = 0;
        for(int i = 0; i < count; i++){
            sum += (arr[i] - this->average())*(arr[i] - this->average());
        }
        cout << "The variance is : "<< sum/count;
        return sum/count;
    }
    int stdDeviation(){
        return sqrt(this->variance());
    }
    void display(){
        if(isEmpty()){
            cout << "No elements to show";
        }
        else{
            cout << "The current queue is : " << endl;
            for(int i = 0; i < count; i++){
                cout<< arr[i] <<" ";
            }
            cout << endl;
        }
    }
};



//-------Application-------

int main(){
    queue q1(3);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);

    q1.average();

}