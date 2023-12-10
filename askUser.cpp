#include<iostream>
using namespace std;
int askUser(){
       cout << "1. Log in"<<endl;
       cout << "2. Signup"<<endl;
       cout << "3. Exit"<<endl;
       int choice;
       cout << "Please enter your choice: ";
       cin >> choice;
       return choice;
}