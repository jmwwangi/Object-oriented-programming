// an object is a self-contained unit that has it's on data and methods
// a user defined blueprint used to create an object


/*
1. #include
2. Class declaration
3. Main function
    create the objects
*/ 

/*Task one:
1. Create a class student.
2. Data
    -name
    -email
    -registration number

3. display details
note that a class name always starts in capital
*/

#include <iostream>
#include <string>
using namespace std;

class Student{
//data
private:
    string name;
    string email;
    string reg_number;
public:
string get_email(){
    return email;
}
void set_email(string new_email){
    email = new_email;
}

//methods
//construc
Student(string _name, string _email, string _reg_number){
    name = _name;
    email = _email;
    reg_number = _reg_number;
}
    void display_details(){
        cout <<"Name"<< name;
        cout <<"Email"<< email;
        cout << "Registration number"<< reg_number;
    }

};


//creating object
int main(){
    Student student1("John", "J@gmail.com", "001");

    cout << student1.name;
      


    return 0;
}