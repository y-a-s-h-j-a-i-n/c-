#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    try{
        if(a==1)
        throw a;
        else if(a==2)
        throw 'A';
        else if(a==3)
        throw 4.5;
    }
    catch(int x)
    {
        cout<<"a is 1 ";
    }
    catch(char y){
        cout<<"string ";
    }
    catch(double z)
    {
        cout<<"4.5 ";
    }
    cout<<"end of program";
    return 0;
}