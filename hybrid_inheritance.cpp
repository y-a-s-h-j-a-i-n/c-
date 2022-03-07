#include<iostream>
using namespace std;
class a
{
public:
void funa(){
cout<<"class a"<<endl;
}
};
class b:public a
{
public:
void funb(){
cout<<"class b"<<endl;
}
};
class c:public a
{
public:
void func(){
cout<<"class c"<<endl;
}
};
class d:public b,public c
{
public:
void fund(){
cout<<"class d"<<endl;
}
};
int main(){
d d1;
cout<<"class d"<<endl;
d1.fund();
d1.funb();
d1.func();
cout<<"class b"<<endl;
b b1;
b1.funa();
b1.funb();
c c1;
cout<<"class c"<<endl;
c1.funa();
c1.func();
a a1;
cout<<"class a"<<endl;
a1.funa();
}
