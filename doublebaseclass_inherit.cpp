#include <iostream>
using namespace std;

class saiyajin{
    public:
    void zenkaiboost(){
        cout<<"Zenkai Boost!"<<endl;
    }
    
    void great_Ape_Transformation(){
    cout<<"Great Ape Transformation"<<endl;
    }
};

class Earthling{
    public:
    void ki(){
        cout<<"Ki Manipulation Technique!"<<endl;
    }    
};

class humanHybrid:public saiyajin,public Earthling{
    public:
    void rage_boost(){
        cout<<"Rage Boost"<<endl;
    }
};
int main(){
    humanHybrid gohan;
    gohan.zenkaiboost();
    gohan.great_Ape_Transformation();
    gohan.rage_boost();
    gohan.ki();
    return 0;
}
