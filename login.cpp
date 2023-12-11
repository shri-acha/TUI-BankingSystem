#include<iostream>
#include "functions.h"
#include<fstream>
#include<string.h>
#include<sstream>
#include <vector>
using namespace std;

class User
{
    public:
     User(string name,string& password){
        userName = name;
        userPassword = password;
    }
    bool compare(string vusr,string vpsd){
        
        if(userName == vusr && userPassword == vpsd){
            return true;
        }
        else{
            return false;
        }
    }
    private:
    string userName;
    string userPassword;
};

void login(){
    banner();
    string temp_name,temp_pass,line;
    cout<<"Enter your name : ";
    cin >> temp_name;
    cout<<"Enter Password : ";
    cin >> temp_pass;

    ifstream readFile;
    bool value = true;
    vector<string> userVector;
    vector<string> passVector;
    readFile.open("userData/users.csv");
    while(getline(readFile,line)){
        string s;
        stringstream ss(line);
        int count = 0;
        if(value){
            value = false;
            continue;
        }
        while(getline(ss,s,',')){
            if(count==0){userVector.push_back(s);count++;}
            else if(count==2){passVector.push_back(s); count=0;}
            else{count++;}

        }
    }
    User tmp_usr(temp_name,temp_pass);
    for(int j=0;j<userVector.size();j++){
    if(tmp_usr.compare(userVector[j],passVector[j])){
        cout <<"User Found,Access Granted"<<endl;
        break;
    }
    else{
        cout<<"Access Denied,Try again!"<<endl;
        cout << "Do you want to try again?(y/n):";
        char restart;
        cin >> restart;
    if(restart == 'y' || restart == 'Y'){
        login();
    }
    else{
        exit();
        break;
    }
    }    
}
}   
