#include<iostream>
#include<fstream>
#include<string>
#include "functions.h"
using namespace std;

string name;
long int phoneNumber;
string password[2];

void signUp(){
    banner();
    ofstream userfile;
    userfile.open("userData/users.txt", ios::app);


    cout << "Enter your name : ";
    cin >> name;

    cout << "Enter your phone number : ";
    cin >> phoneNumber;


    while(password[0].length() < 8){

        cout <<"Enter new password : ";
        cin >> password[0];

        if(password[0].length() < 8){
            cout<<"Error!!! password must of minimum 8 charcter."<<endl;
        }

    }
    do
    {
        cout << "Confirm your password : ";
        cin >> password[1];

        if (password[1] != password[0])
        {
            cout << "password mismatch. Please try again." << endl;
        }
    } 
    while (password[1] != password[0]);
    
    userfile <<"\n"<< name <<"\t"<< phoneNumber << "\t" << password[1];
    userfile.close();
    
    cout << "Account creation successful"<<endl;

    cout << "Do you want to login now?(y/n):";
    char restart;
    cin >> restart;
    if(restart == 'y' || restart == 'Y'){
        login();
    }
    else{
        exit();
    }
}
