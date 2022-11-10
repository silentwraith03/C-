#include <iostream>
using namespace std;

class A{
    public:
    int x;
};
class B:public A{
    public:
    int y;
    
    void name(){
        cout<<"Kunal";
    }
    
    void display(){
        cout<<"Value of x: "<<x<<endl;
        cout<<"Value of y: "<<y<<endl;
    }
};

int main(){
B b1;
b1.x=20;
b1.y=10;
b1.display();
b1.name();
    return 0;
}
