#include <iostream>
#include <string>

using namespace std;

class Shape{
    public:
    virtual void draw (){
        cout << "Drawing a generic shape"<<endl;
    }
};