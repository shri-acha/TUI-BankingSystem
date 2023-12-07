#include<iostream>
#include<string>
#include<cstdlib>
//#include "functions.h"

using namespace std;
void banner();
int askUser();
void exit();

struct user{
        int id;
        string name;
        long int phone_number;
        string password;
};

int userChoice;
int main(){
        banner();
        userChoice = askUser();
        while(userChoice > 3 || userChoice < 1){
                banner();
                userChoice = askUser();
        }
        switch(userChoice){
                case 1:
                        //login();
                        break;
                case 2:
                        //signUp();
                        break;
                case 3:
                        exit();
                        break;
        }
        return 0;
}


void banner(){
        system("cls");
        cout <<"__________________________________________"<<endl;
        cout <<"               TUI-BANKING SYSTEM          "<<endl;
        cout <<"__________________________________________"<<endl;
}

int askUser(){
       cout << "1. Log in"<<endl;
       cout << "2. Signup"<<endl;
       cout << "3. Exit"<<endl;
       int choice;
       cout << "Please enter your choice: ";
       cin >> choice;
       return choice;
}

void exit(){
        cout << "Thank you for using our service."<<endl;
}
