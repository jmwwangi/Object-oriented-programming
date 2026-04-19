#include <iostream>
#include <string>

int main() {
    // Prompt the user for their name
    std::cout << "Enter your name: "; //

    // Read the input from the user
    std::string name;
    std::cin >> name; //

    // Display a greeting using the input name
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
