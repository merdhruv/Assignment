// B1. Write a C++ program to change every letter in a given string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
// Author : <Dhruv Pratap Singh>
//-------------------------------------------------------
//header files included
#include <iostream>
#include <string>
using namespace std;
//-------------------------------------------------------

//-------Library-------

string shift(string &str){
    int char_code;
    for(int i = 0; i < str.length(); i++){
        char_code = int(str[i]);    //get the ascii code for the char.
        if(char_code == 122){       //if char == 'z' change it to 'a'.
            str[i] = char(97);
        }
        else if(char_code == 90){   //if char == 'Z' change it to 'A'.
            str[i] = char(65);
        }
        else if(char_code >= 65 && char_code <=90 || char_code >= 97 && char_code <=122){ //otherwise if char is in between 'a' and 'z' or 'A' and 'Z'.
            str[i] = char(char_code + 1);                                   // increase the ascii value by 1.
        }
    }
    return str;
}


//-------Application-------

int main(){
   string str = "";
   cout << "Enter a Word : ";
   cin >> str;
   cout << endl;
   cout<< "New word is: "<< shift(str);
}