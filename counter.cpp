/*
Developer: Chris Jellum
Date: 1/23/20
Version: 0.1
Description: A counter that updates when specific button is read from the Keyboard
*/
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;

int counter_help();

//Main function
int main(){

    //counter and input initialized to 0
    char input = 'a';
    int counterWin = 0;
    int counterLose = 0;

    do{
    //Not NEEDED YET
    //  string output = "";
       input = _getch();
        
        if (input == '1'){
            counterWin += counter_help();
            cout << "WIN: " << counterWin << endl;
        }
        if (input == '2'){
            counterLose += counter_help();
            cout << "LOSE: " << counterLose << endl;
        }
    }while(input !=  '0');
}       

int counter_help(){
    return 1;
}
