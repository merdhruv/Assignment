// C1. Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
#include <string>
using namespace std;
//-------------------------------------------------------

//-------Library-------
class Person{
    string name;
    int age = 0;
    string country;
public:
    void setName(string str){
        this->name = str;
    }
    void getName(){
        if(this->name != ""){                               //if Person has a name then return the name.
            cout << "my name is "<<this->name << endl;
        }else{                                              //else return i don't have a name.
            cout << "Sorry, i don't have a name." << endl;
        }
    }
    void setAge(int n){
        try{
            this->age = n;
            if(n <=0 || n >= 100){
                throw(n);
            }
        }     
        catch(int n){
            cout << "the age must be between 0 to 100";
            exit(EXIT_FAILURE);
        }
    }
    void getAge(){
        if(this->age != 0){                                 //if Person has a age then return age.
            cout << "my age is "<<this->age << endl;
        }else{                                              //else return i don't know.
            cout << "I don't know my age." << endl;
        }
    }
    void setCountry(string str){
        this->country = str;
    }
    void getCountry(){
        if(this->country != ""){                            //if Person has a country then return country name.
            cout << "I'm from " << this->country << endl;
        }else{                                              //else return i don't remember.
            cout << "I don't remember my country." << endl;
        }
    }
    Person(){                                                 //Constructor called.
        cout << "Hi, nice to meet you" << endl;
    }
    ~Person(){                                                //Destructor called.
        cout << "Bye, Talk to you later";
    }
};



//-------Application-------

int main(){
    int ans = 0;
    cout << "Do you want to talk to this person" << endl;
    cout << " 1 : yes , 2 : no" << endl;
    cin >> ans;
    while(1 == ans){
        Person p1;
        p1.setName("ayush");
        p1.getName();
        
        p1.setAge(22);
        p1.getAge();

        p1.setCountry("India");
        p1.getCountry();
        
        ans = 0 ;
    }

  
}