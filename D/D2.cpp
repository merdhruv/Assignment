// D2.  Write a C++ program to find the mean, variance and standard deviation of all elements of a queue.
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
#include <map>
#include <cmath>
using namespace std;
const int MAX_SIZE = 100;
//-------------------------------------------------------

//-------Library-------
class Queue {
  int front;
  int rear;
  int arr[MAX_SIZE];
public: 
    Queue() {
        front = -1;
        rear = -1;
    }
    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }
    bool isEmpty() {
        return (front == -1 && rear == -1);
    }
    // function to enqueue elements.
    void enqueue(int x) {
        if (isFull()) {
            cout << "Error: Queue is full" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
    }
    //function to dequeue elements.
    void dequeue() {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }
    //function to display elements of queue.
    void display() {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    //function to get Mean of elements.
    float getMean() {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
        return 0;
        }
        float sum = 0;
        for (int i = front; i <= rear; i++) {
            sum += arr[i];
        }
        return sum / (rear - front + 1);
    }
    // function to get variance of elements.
    float getVariance() {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return 0;
        }
        float mean = getMean();
        float variance = 0;
            for (int i = front; i <= rear; i++) {
                variance += pow(arr[i] - mean, 2);
            }
            return variance / (rear - front + 1);
        }   
    //function to get Standard Devaition.
    float getStdDev() {
        return sqrt(getVariance());
    }
};

//-------Application------



int main() {
  cout << "Initialize a Queue." << endl;
  Queue q;
  cout << "\nInsert some elements into the queue:" << endl;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.display();
  cout << "Mean: " << q.getMean() << endl;
  cout << "Variance: " << q.getVariance() << endl;
  cout << "Standard Deviation: " << q.getStdDev() << endl;
  cout << "\nRemove two elements from the said queue: " << endl;
  q.dequeue();
  q.dequeue();
  q.display();
  cout << "Mean: " << q.getMean() << endl;
  cout << "Variance: " << q.getVariance() << endl;
  cout << "Standard Deviation: " << q.getStdDev() << endl;
  return 0;
}
