#include <iostream>
using namespace std;
class A{
    public:                       //access specifier
    void display(){
        cout<<"successfully accessed member function";
    }               //member function
};
int main(){
    A obj;               //objected created
    obj.display();      //accessing member function using object
}