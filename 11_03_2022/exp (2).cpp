#include<iostream>
using namespace std;
class a
{
    public:
    void displaya()
    {
        cout<<"display A";
        }

};
class c:public a{
    public:
    void displayc()
    {
        cout<<"display C";
        }
};
class b
{
    public:
    void displayb()
    {
        cout<<"display B";
        }

};
class d:public b{
    public:
    void displayd()
    {
        cout<<"display D";
        }
};
class e:public c,public d{
    public:
    void displaye()
    {
        cout<<"display E";
        }
};
class f:public e{
    public:
    void displayf()
    {
        cout<<"display F";
        }
};
int main(){
    a A;
    b B;
    c C;
    d D;
    e E;
    f F;
    A.displaya();
    F.displaya();
    F.displayc();
    F.displayb();
    F.displaye();
    E.displaya();
    E.displayb();
    E.displaye();
}