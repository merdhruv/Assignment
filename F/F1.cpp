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
    // setting the basic info of Student.
    void setStudent(){
        cout << "Enter Student Name : " ;
        cin >> name;
        try{
            cout << "Enter age : ";
            cin >> age;
            if(age<0 || age>100){
                throw(age);
            }
        }
        catch(int age){
            cout << "Age must be greater than zero and less than 100";
            exit(EXIT_FAILURE);
        }
        cout << "Gender : ";
        cin >> gender;
    }
    // to display the info of Student.
    void getStudent(){
        cout << "----------------------------------------------------------------"<< endl;
        cout << "Name : "<< name << ", Age : " << age << ", Gender : " << gender << endl;  
    }

};
//Derived studentResult from Student Publicly.
class studentResult : public Student{
    int marks;
    int percentage;
public:
    //to set result data.
    void setResult(){
        try{
            cout << "Enter total marks out of 500 : ";
            cin >> marks;
            if(marks>500 || marks <0){
                throw(marks);
            }
        }
        catch(int marks){
            cout << "marks should be greater than 0 and less than 500";
            exit(EXIT_FAILURE);
        }
        percentage = (marks*100)/500;
    }
    //to get result data.
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