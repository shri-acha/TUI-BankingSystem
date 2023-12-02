#include<iostream>
#include<string>
#include<cstlib>
using namespace std;
void banner();
struct user{
        int id;
        string name;
        long int phone_number;
        string password;
};
int main(){
        do{
           system("cls");
            banner();
        }
        while(true);
        return 0;
}
void banner(){
        cout <<"__________________________________________"<<endl;
        cout <<"               TUI-BANKING SYSTEM          "<<endl;
        cout <<"__________________________________________"<<endl;
}
