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
cal add(cal obj1,cal obj2){
cal obj;
obj.input1=obj1.input1+obj2.input1;
obj.input2=obj1.input2+obj2.input2;
return obj;
}
};
int main(){
cal obj1,obj2,obj3;
obj1.setinput(10,2);
obj2.setinput(5,5);
obj3=obj1.add(obj1,obj2);
cout<<"Result: " <<obj3.input1<<" " <<obj3.input2;
}
