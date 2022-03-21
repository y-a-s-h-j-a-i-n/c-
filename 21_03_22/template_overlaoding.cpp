#include<iostream>
using namespace std;
template<class t1>
void sum(t1 a,t1 b,t1 c){
    cout<<"sum :"<<a+b+c<<endl;
}
template<class t1,class t2>
void sum(t1 a,t2 b,t1 c){
    cout<<"sum :"<<a+b+c<<endl;
}
void sum(int a,int b){
    cout<<"sum :"<<a+b<<endl;
}
int main(){
    int a=0,c=2;
    float b=1.5;
    sum(a,c);
}