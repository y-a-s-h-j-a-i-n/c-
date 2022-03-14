#include<iostream>
using namespace std;
void xtest(int test){
    cout<<"inside xtest, test is:"<<test<<"\n";
    if(test)
    throw test;
}
int main(){
    cout<<"start\n";
    try{
        cout<<"inside try block\n";
        xtest(0);
        xtest(2);
        xtest(1);
        

    }
    catch(int i){
        cout<<"caught an exception -- value is :";
        cout<<i <<"\n";
    }
    cout<<"end";
}