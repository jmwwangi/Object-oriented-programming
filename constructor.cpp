#include <iostream>
#include <string>

using namespace std;

class Student{
private:
 string name, password, registration_number, email;

public:
int marks;
string grade;
string inputed_name, inputed_password;

void setDetails(string _name, string _password, string _reg_no, string _email){
    name = _name;
    password = _password;
    registration_number = _reg_no;
    email = _email;
}

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
void show_result(){
    cout <<"\nEnter marks: " << endl;
    cin >> marks;

    if (marks >= 80){
        grade = "A";
    }
    else if(marks >= 70){
        grade = "B";
    }else if(marks >= 60){
        grade = "C";
    }else if(marks >= 50){
        grade = "D";
    }else{
        grade ="F";
    }
    cout << "\nGrade: "<< grade << endl;
}
};

int main(){
    Student student1;
    student1.setDetails("Jay", "jaym", "ene2111", "jay@gmail.com");
    if (student1.validate_user()){
        cout << "\nAccess granted!"<< endl;
        student1.show_result();
    }else{
        cout <<"Invalid user credentials"<< endl;
    }
    
    return 0;
}