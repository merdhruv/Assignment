// F3. C++ program to read and print employee information with department and pf information using hierarchical inheritance

// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
#include <string>
using namespace std;
//-------------------------------------------------------

//-------Library-------

class Employee {
    int empId;
    string name;
    char gender;
public:
    void setInfo(){
        cout << "Enter Employee ID : ";
        cin >> empId;
        cout << "Enter Employee Name : ";
        cin >> name;
        cout << "Gender : ";
        cin >> gender;
    }
    void getInfo(){
        cout<<"--------------------------------------------------"<<endl;
        cout << "ID : " << empId << ", Name : " << name << ", Gender : "<< gender << endl;
        
    }
};

class Department : public Employee{
    string deptName;
    int deptCapacity;
public:
    void setDept(){
        cout << "Enter the name of Department : ";
        cin >> deptName;
        cout << "Total Number of Employees in Department : ";
        cin >> deptCapacity;
    }
    void getDept(){
        getInfo();
        cout<<"--------------------------------------------------"<<endl;
        cout << "The name of Department is : "<< deptName << endl;
        cout << "Total number of Employees in Department : " << deptCapacity << endl;
        cout << "================================================="<<endl;
    }

};

class Loan : private Employee{
    string loanDetails;
    int loanAmount;
public:
    void setLoan(){
        cout << "Enter Loan Detail : ";
        cin >> loanDetails;
        cout<< "Loan Amount : ";
        cin >> loanAmount;
    }
    void getLoan(){
        cout<<"--------------------------------------------------"<<endl;
        cout << "Loan Details : " << loanDetails << endl;
        cout << "Amount : " << loanAmount << endl;
        cout << "================================================="<<endl;
    }
};



//-------Application-------

int main(){
    
    Department dept;
    dept.setInfo();
    dept.setDept();
    dept.getDept();

    Loan l1;
    l1.setLoan();
    l1.getLoan();

}