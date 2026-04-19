#include <iostream>
#include <string>
#include <vector>

using namespace std;
// creates a class named student
class Student{

    //encapsulates the named data
private:
 string name, password, registration_number, email;

 //allows for access of forthcoming information
public:
int marks;
string grade;
string inputed_name, inputed_password;

// setter for setting the privated data
void setDetails(string _name, string _password, string _reg_no, string _email){
    name = _name;
    password = _password;
    registration_number = _reg_no;
    email = _email;
}

//getters
string getName(){
    return name;
}
string getEmail(){
    return email;
}
string getPassword(){
    return password;
}
string getReg_no(){
    return registration_number;
}

//method to validate the user
bool validate_user(){
    cout << "\nEnter name: " << endl;
    cin >> inputed_name;
    cout << "\nEnter password: " << endl;
    cin >> inputed_password;

    if (name == inputed_name && password == inputed_password){
        return true;
    }else{
        return false;
    }
}
//method for calculating and displaying the student's grade 
void show_result() {
    // This loop will continue to ask until marks are between 0 and 100
    do {
        cout << "Enter marks (0-100): ";
        cin >> marks;

        if (marks < 0 || marks > 100) {
            cout << "Invalid input! Please enter a value between 0 and 100." << endl;
        }
    } while (marks < 0 || marks > 100);

    // Once the loop exits, we know the marks are valid
    if (marks >= 80) grade = "A";
    else if (marks >= 70) grade = "B";
    else if (marks >= 60) grade = "C";
    else if (marks >= 50) grade = "D";
    else grade = "F";

    cout << "\nGrade: " << grade << endl;
}
};

int main(){
    int attempts = 0;
    int max_attempts = 3;


    Student student1;
    student1.setDetails("Jay", "jaym", "ene2111", "jay@gmail.com");
    while (attempts < 3){
    if (student1.validate_user()){
        cout << "\nAccess granted!"<< endl;
        student1.show_result();
        break;
    }else{
        attempts++;
        if (attempts < max_attempts){
            cout << "Invalid credentials. You have "<< (max_attempts - attempts)<< " attempt(s) remaining.\n"<< endl;
        }
        else{
            cout << "Too many attempts! Account locked"<<endl;
        }
    }
    }
    
    return 0;
}
//functionalities i would like to implement
/*
1. The system should be able to allow input of new students - i will implement this by use of vectors
2. the system should allow for editing of information within it - i will implement this using vectors
3. the system should be able to display all student information when needed
4. the system should be able to remove students - i will implement this by use of vectors

*/