// F3. C++ program to read and print employee information with department and pf information using hierarchical inheritance

// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
#include <string>
using namespace std;
//-------------------------------------------------------

//-------Library-------

class Employee{
    int EmployeeId;
    string name;
    string designation;

public:
	int m_salary;
    void setEmpinfo(){
        cout << "Enter Employee's information:" << endl;
        cout << "Employee Id: ";
        cin >> EmployeeId;
        cout << "Name : ";
        cin >> name;
        cout << "Designation : ";
        cin >> designation;
		cout << "Salary : ";
		cin >> m_salary;
    }

    void getEmpinfo(){
        cout<<"----------------------------------------------------------"<<endl;
         cout << "Employee Id : " << EmployeeId << ",Name : " << name << ",Designation : " << designation << endl;
         cout <<"********************************************************"<<endl;
    }
};

class department : public Employee{
    string department;
    int EmpNo;
public:
     void setDepinfo(){
        cout << "Enter Department name :" << endl;
        cin >> department;
        cout << "Number of Employees working in Department : ";
        cin >> EmpNo;
    }

    void getDepinfo(){
         cout<<"-----------------------------------------------------"<<endl;
         cout << "Department name : " <<department  << ", Employee Number : " << EmpNo <<endl;
    }
};

class pf_info : private Employee{
    int loanAmount;
    string Details;
public:
     void setpf_info(){
        cout << "Enter Loan Detail : ";
        cin >> Details;
        cout<< "Loan Amount : ";
        cin >> loanAmount;
    }
    void getpf_info(){
        cout<<"*****************************************************"<<endl;
        cout << "Loan Details : " << Details << endl;
        cout << "Amount : " << loanAmount << endl;
        cout << "******************************************************"<<endl;
    }


};

class PF: public Employee{ 
public:    
    void displayPFdetails(){
        cout<<"Salary: "<<m_salary<<"\nPF: "<< (m_salary*12)/100 <<endl;
    }
};


//--------------------------------------------------------------
// --- Application ---
/*
 Interface between executor and Algorithm/Data-structure-library.
*/
int main(){
    department dept;
    PF obj;
    dept.setEmpinfo();
    dept.setDepinfo();
    dept.getDepinfo();

	
    pf_info l1;
    obj.setEmpinfo();
    l1.setpf_info();
    l1.getpf_info();
	obj.displayPFdetails();

}