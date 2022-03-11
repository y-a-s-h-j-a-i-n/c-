#include<iostream>
using namespace std;
class base{
    public:
    int b;
    void show(){
        cout<<"\nb="<<b;
        }
        };
        class derived:public base{
            public:
            int d;
            void show(){
                cout<<"\n b="<<b<<"\n d"<<d;
    }
};

int main(){
base b1;
derived d1;
base *bptr;
bptr=&b1;
cout<<"\n base class pointer assign address of base class object";
bptr->b=100;
bptr->show();
bptr=&d1;
bptr->b=200;
cout<<"\nbase class pointer assign address of derived class objet";
bptr-> show();
derived *dptr;
dptr=&d1;
cout<<"\nderived class pointer assign address od derived class object";
dptr->d=300;
dptr->show();
}