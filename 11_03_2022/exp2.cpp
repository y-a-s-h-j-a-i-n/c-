#include<iostream>
using namespace std;
int main(){
    int n1,n2,result;
    cin>>n1>>n2;
    try{
        if(n2==0)
        throw n2;
        else{
            result=n1/n2;
            cout<<"\n result is :"<<result;
        }
    }
    catch(int x){
        cout<<"\n can't divide by :"<<x;
    }
    cout<<"\n end of program.";
}