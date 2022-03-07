#include<iostream>
using namespace std;
class p1
{
public:
p1(int x){
cout<<"x is "<<x<<endl;
}
};
class p2: public p1
{
public:
p2(int y){
cout<<"y is "<<y<<endl;
}
};
class p3:public p2
{
public:
p3(int z){
cout<<"z is "<<z<<endl;
}
};
int main(){
p3 p(1);
p2 a(2);
p1 b(3);
//p.p3(3);
//p.p2(2);
//p.p1(1);
}
