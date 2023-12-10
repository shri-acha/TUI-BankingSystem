#include<iostream>
#include "functions.h"
#include<fstream>
#include<string.h>
using namespace std;

struct user
{
    int id;
    string name;
    long int phone_number;
    string password;
};
void login(){
    user person;
    cout<<"Enter your name : ";
    cin >> person.name;
    cout<<"Enter Password : ";
    cin >> person.password;
}