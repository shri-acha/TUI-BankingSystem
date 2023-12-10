#include<iostream>
#include "functions.h"
#include<fstream>
#include<string.h>
using namespace std;

class User
{
    public:
     User(string name,string& password){
        userName = name;
        userPassword = password;
    }
    private:
    string userName;
    string userPassword;
};

void login(){
    banner();
    string temp_name;
    string temp_pass;
    cout<<"Enter your name : ";
    cin >> temp_name;
    cout<<"Enter Password : ";
    cin >> temp_pass;
}
