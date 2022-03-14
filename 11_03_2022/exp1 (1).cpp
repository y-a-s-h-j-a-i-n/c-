#include<iostream>
using namespace std;

class b{
    public:
    void displayb()
    {
        cout<<"display B";
        }
};

class c:public b{
    public:
    void displayc()
    {
        cout<<"display C";
        }
};
class d:public c,public b{
    public:
    void displayd()
    {
        cout<<"display D";
        }
};
int main(){
    b B;
    c C;
    d D;
    // D.displayb();//error
}