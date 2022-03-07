#include<iostream>
using namespace std;
class person{
protected:
void abc(){
cout<<"hi hello"<<endl;
}
};
class doctor:protected person
{
public:
void xyz(){
cout<<"yup its succefully work"<<endl;
}
};
int main(){
doctor d;
d.xyz();
d.abc();
}
