#include<iostream>
using namespace std;
class Calculator{
public:
int input1;
int input2;
void setInput(int a,int b){
input1=a;
input2=b;
}
int sub();
int add(){
return input1+input2;
}
};
int Calculator::sub(){
return input1-input2;
}
int main(){
Calculator obj1;
obj1.setInput(10,2);
cout<<"the input:"<<obj1.input1<<" " <<obj1.input2;
cout<<"the sum of input is :"<<obj1.add();
cout<<"\nthe sub is "<<obj1.sub();
return 0;
}
