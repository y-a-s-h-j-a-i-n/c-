#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter 1 number :";
    cin>>n1;
    cout<<"enter 2 number:";
    cin>>n2;
    try{
        if(n2!=n1){
            float div=(float)n1/n2;
            if(div<0)
            throw 'e';
            cout<<"n1/n2="<<div;
        }
        else
        throw n2;
    }
    catch(int e)
    {
        cout<<"division is not posssible";
    }
    catch(char st){
        cout<<"expetion division is lesss than 1";
    }
    catch(...)
    {
        cout<<"exectiopn unkonwn";
    }
    return 0;
}