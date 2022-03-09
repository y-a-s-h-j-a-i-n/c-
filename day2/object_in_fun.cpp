#include<iostream>
using namespace std;
class cal{
public:
int input1;
int input2;
void setinput(int a,int b){
input1=a;
input2=b;
}
int add(cal obj1,cal obj2){
return obj1.input1+obj2.input1;
}
};
int main(){
cal obj1,obj2;
obj1.setinput(10,2);
obj2.setinput(5,5);
cout<<"the inputs: "<<obj1.input1<<" " <<obj2.input1;
cout<<"\nthe sum is :"<<obj1.add(obj1,obj2);
}
