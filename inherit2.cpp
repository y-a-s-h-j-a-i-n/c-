#include<iostream>
using namespace std;
class p1{
public:
void fun1(){
cout<<"class 1"<<endl;
}
};
class p2:public p1{
public:
void fun2(){
cout<<"class 2"<<endl;
}
};
class p3:public p2{
public:
int x=5;
void fun3(){
cout<<"class 3"<<endl;
cout<<"x ="<<x<<endl;
}
};
int main(){
p3 p;
p.fun1();
p.fun2();
p.fun3();
}
