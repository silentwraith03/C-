#include <iostream>

using namespace std;

int main(){
    int a,b;
    char op;
    cout << "This a basic calculator\n";
    cout<<"Enter operator: ";
    cin>>op;
    if(op=='+'){
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
        cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
    }
    else if(op=='-'){
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
        cout<<"Difference of "<<a<<" and "<<b<<" is "<<a-b;
    }
    else if(op=='*'){
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
        cout<<"Product of "<<a<<" and "<<b<<" is "<<a*b;
    }
    else if(op=='/'){
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
        cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b;
    }
    else{
        cout<<"Invalid op";
    }
    return 0;
}

