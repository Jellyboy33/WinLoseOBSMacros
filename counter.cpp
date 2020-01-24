/*
Developer: Chris Jellum
Date: 1/23/20
Version: 0.1
Description: A counter that updates when specific button is read from the Keyboard
*/
#include <iostream>
#include <string>
using namespace std;

int counter_help();

//Main function
int main(){
    

    //Not NEEDED YET
    //  string output = "";
    
    //counter initialized to 0
    int counter = 0;
    cout << counter << endl;
    counter += counter_help();
    cout << counter << endl;
}

int counter_help(){
    return 1;
}
