#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"

using namespace std;
void banner();
void choice();
struct user{
        int id;
        string name;
        long int phone_number;
        string password;
};
int main(){
        system("cls");
        banner();
        choice();
        return 0;
}
void banner(){
        cout <<"__________________________________________"<<endl;
        cout <<"               TUI-BANKING SYSTEM          "<<endl;
        cout <<"__________________________________________"<<endl;
        cout <<"1.Login in"<<endl;
        cout <<"2.Sign up"<<endl;
        cout <<"__________________________________________"<<endl;
}

void choice(){
        int x;
        cin >> x;
        if (x==1){
                system("cls");
                login();
        }
        else if (x==2){
                system("cls");
                signUp();
        }
}
