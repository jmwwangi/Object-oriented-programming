#include <vector>
#include <iostream>
#include <string>

using namespace std;
int main(){
    vector<string> cars;
    cars.push_back("Mazda");

    cout <<cars.empty();
    // cout << cars.at(1)<< " ";
    // cout << cars.front()<< " ";
    // cout << cars.back()<< " ";

    // cars.at(3)="nissan";

    // cout << cars.at(3);

    // cars.push_back("Tesla");
    // cout << cars.at(4);

    
// for(string car : cars){
//     cout << car<< endl;
// }
}
// a vector is like an array that you dont have to prewrite the amount of elements