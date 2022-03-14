#include<iostream>
using namespace std;
void demo() throw(int,char){
    int a=2.1;
    if(a==1)
    throw a;
    else if(a==2.1)
    throw 'A';
    else if(a==3)
    throw 4.5;
}
int main(){
try
{
    demo();
}
catch(char n)
{
cout<<"\n Exception caught.";
}
cout<<"\n END of program.";
}