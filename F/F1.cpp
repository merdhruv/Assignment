// F1. how to read and print students information using two classes and simple inheritance using C++ program?

// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
using namespace std;
//-------------------------------------------------------

//-------Library-------
class Student{
    string name;
    int age;
    char gender;
public:
    void setStudent(){
        cout << "Enter Student Name : " ;
        cin >> name;
        cout << "Enter age : ";
        cin >> age;
        cout << "Gender : ";
        cin >> gender;
    }
    void getStudent(){
        cout << "----------------------------------------------------------------"<< endl;
        cout << "Name : "<< name << ", Age : " << age << ", Gender : " << gender << endl;  
    }

};

class studentResult : public Student{
    int marks;
    int percentage;
public:
    void setResult(){
        cout << "Enter total marks out of 500 : ";
        cin >> marks;
        percentage = (marks*100)/500;
    }
    void getResult(){
        cout << "----------------------------------------------------------------"<< endl;
        cout << "Total Marks : " << marks << ", Percentage : " << percentage  << "%"<< endl;
    }
};



//-------Application-------

int main(){

    studentResult s1;

    s1.setStudent();
    s1.setResult();
    s1.getStudent();
    s1.getResult();

}