// A5. Write a C++ program with following options:
// 	a. Find a number is Shakuntala Devi's number or not. Ex: 145
// 	b. Find range of Shakuntala Devi's numbers. Ex: between 1 to 1000 is : 1, 2, 145 
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//-------------------------------------------------------

//-------Library-------
int fact(int n) {               //function to calculate factorial.
  if(n > 1)
    return n * fact(n - 1);
  else
    return 1;
}
bool deviNumber(int &n){                 //A number whose sum of factorial of each digit is equal to that number is Shakuntala Devi's number
    if(1 == n || 2 == n) return true;
    else{
        int num = n;
        int sum = 0;
        while(num>0){
            int temp = num % 10;        //unit's place of the digit is taken. eg = 145 , temp = 5
            sum += fact(temp);          //factorial of that digit is added to the sum. eg =  sum + = 120
            num = num/10;               //unit's place is removed from the number. eg = 145 => 14.
        }
        return (sum == n);
    }   
}


//-------Application-------

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n; 
    cout << endl;
    vector<int>ans;
    for(int i = 1; i <= n ; i++){
        if(deviNumber(i)){
            ans.push_back(i);
        }
    }
    cout << "Between 1 to "<<n<<" Shakuntala Devi's numbers are : ";
    for(auto x: ans){
        cout << x << ", ";
    }
}