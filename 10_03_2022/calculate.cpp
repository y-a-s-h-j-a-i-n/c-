#include<iostream>
using namespace std;
class shape{
    protected:
    float x;
    public:
    void getdata(){
        cin>>x;
    }
    virtual float calculatorarea()=0;
};
class square:public shape{
    public:
    float calculatorarea(){
        return x*x;
    }
};
class circle:public shape{
    public:
    float calculatorarea(){
        return 3.14*x*x;
    }
};
int main(){
square s;
s.getdata();
cout<<"square = "<<s.calculatorarea()<<endl;
circle c;
c.getdata();
cout<<"circle area ="<<c.calculatorarea()<<endl;
}