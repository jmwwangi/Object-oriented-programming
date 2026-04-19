/*
FUNCTIONAL REQUIREMENTS
1. The user should be able to input the correct user name and password
2. If the user inputs a correct username and password they should be allowed into the system
3. It should lock out the user if they fail to input the correct details 3 times

VARIABLES
string correct_name = "Admin";
string correct_passowrd = "1234";

string username;
string password;
int attempts;
while (attempts <= 3){
    1. Prompt Username and password
    2. Test for the conditions 
    if (correct_username == username && correct_password == password){
    cout << "access granted"
    break;
    }else{
    attempts++;
    }
}
*/

#include <iostream>
using namespace std;

int main(){
//stores the correct login credentials
    string correct_name = "Admin";
    string correct_password = "1234";
    int attempts = 0;

//Variables for the inputed credentials
    string username;
    string password;

// executes the programme while the attempts are less than or equal to 3
    while (attempts<3){
        cout<< "Enter username: ";
        cin>> username;
        cout << "Enter password: ";
        cin>> password;

    if (correct_name == username && correct_password == password){
        cout<< "Access granted";
        break;
    }else {
        attempts++;
    }
}
    return 0;
}

