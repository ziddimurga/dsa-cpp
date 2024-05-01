#include <iostream>
using namespace std;
class A{
    public:   //access specifier
    int x=5;  //data member    
};
int main(){
    A obj;  //objected created
    obj.x;  //accessing data member using object

    cout<<obj.x;
}