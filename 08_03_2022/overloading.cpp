#include <iostream>  
using namespace std;
class ABC{
    public:
    void dis(){
        cout<<"From Parent class\n";
    }
};
class XYZ:public ABC{
    public:
    void dis(){
        cout<<"From child class\n";
    }
};
int main(){
    XYZ x;
    x.dis();
    x.ABC::dis();
}
