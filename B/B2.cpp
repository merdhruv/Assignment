// B1. Write a C++ program to change every letter in a given string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
#include <string>
using namespace std;
//-------------------------------------------------------

//-------Library-------

bool isPalindrome(string &str){
    int lo = 0 , hi = str.length()-1;               // take two pointers, one at starting of string and another one at end. 
    while(lo<=hi){
        if(str[lo++] != str[hi--]){return false;}   //if the starting and end pointers have different char return false.
    }                                               //increase the starting pointer and decrease the ending pointer.
    return true;                                    //else return true.
}


//-------Application-------

int main(){
   string str = "";
   cout << "Enter a Word : ";
   cin >> str;
   cout << endl;
   if(isPalindrome(str)){
    cout<<"the given word is a palindrome";
   }
   else{
    cout<<"the given word is not a palindrome";
   }
}