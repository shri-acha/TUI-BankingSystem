#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"

using namespace std;
void banner();
int askUser();
void exit();

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
                        banner();
                        login();
                        break;
                case 2:
                        signUp();
                        break;
                case 3:
                        exit();
                        break;
        }
        return 0;
}