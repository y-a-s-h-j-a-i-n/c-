#include<iostream>
using namespace std;
class person{
public:
int a1;
void fun1()
{
cout<<"hi how are you"<<endl;
}
protected:
int a2;
void fun2()
{
cout<<"hello"<<endl;
}
private:
int a3;
void fun3()
{
cout<<"successful"<<endl;
}
};
class doctor:public person{
public:
int b1;
void fun11()
{
cout<<"inherient"<<endl;
}
};

int main(){
doctor d;
d.fun11();
d.fun1();
}

