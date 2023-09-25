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
    //to set the Employee values.
    void setEmpinfo(){
        cout << "Enter Employee's information:" << endl;
        cout << "Employee Id: ";
        cin >> EmployeeId;
        cout << "Name : ";
        cin >> name;
        cout << "Designation : ";
        cin >> designation;
        cout << "Salary : ";
        try{
            cin >> m_salary;
            if(m_salary <= 0){
                throw(m_salary);
            }            
        }
        catch(int m_salary){
            cout<<"Salary must be greater than zero";
            exit(EXIT_FAILURE);
        }
        
    }
    //to get the Employee values.
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
    //to set Department values.
     void setDepinfo(){
        cout << "Enter Department name :" << endl;
        cin >> department;
        cout << "Number of Employees working in Department : ";
        cin >> EmpNo;
    }
    //to get the Department values.
    void getDepinfo(){
        cout<<"-----------------------------------------------------"<<endl;
        cout << "Department name : " <<department  << ", Employee Number : " << EmpNo <<endl;
    }
};

class pf_info : private Employee{
    int loanAmount;
    string Details;
public:
    //to set pfinfo values.
    void setpf_info(){
        try{
            cout << "Enter Loan Detail : ";
            cin >> Details;
            cout<< "Loan Amount : ";
            cin >> loanAmount;
        }
        catch(...){
            cout << "Error!!";
        }
    }
    //to get the pfinfo values.
    void getpf_info(){
        try{
            cout<<"*****************************************************"<<endl;
            cout << "Loan Details : " << Details << endl;
            cout << "Amount : " << loanAmount << endl;
            cout << "******************************************************"<<endl;
        }
        catch(...){
            cout << "Error!!";
        }
    }


};

class PF: public Employee{ 
public:   
    //to display PF details.
    void displayPFdetails(){
        cout<<"Salary: "<<m_salary<<"\nPF: "<< (m_salary*12)/100 <<endl;
    }
};


//--------------------------------------------------------------
// --- Application ---

int main(){
    department dept;

    dept.setEmpinfo();
    dept.setDepinfo();
    dept.getDepinfo();

	PF obj;
    pf_info l1;

    obj.setEmpinfo();
    l1.setpf_info();
    l1.getpf_info();
	obj.displayPFdetails();

}