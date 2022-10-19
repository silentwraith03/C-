// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Sample{
    int x,y;
    public:
    void getdata(int a, int b);
    friend int sum(Sample S);
    
};
void Sample::getdata(int a,int b){
    x=a;
    y=b;
}
int sum(Sample S){
    int a;
    int sum = a;
    sum = S.x+S.y;
    cout<<"Sum is: "<<sum;
    return 0;
}
int main(){
    Sample ob1;
    ob1.getdata(20,30);
    sum(ob1);
    return 0;
}
