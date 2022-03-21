#include<iostream>
using namespace std;
template<typename T>
T swap(T *n1,T *n2)
{
    T temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    cout<<"inside template"<<endl;
}
void swap(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    cout<<"inside template"<<endl;
}
int main(){
int i=10,j=20;
double x=10.1,y=23.3;
char a='x',b='z';
cout<<"Original i,j: "<<i<<' '<<j<<"\n";
cout<<"Original x,y: "<<x<<' '<<y<<"\n";
cout<<"Original a,b: "<<a<<' '<<b<<"\n";
swap(&i,&j);
swap(&x,&y);
swap(&a,&b);
cout<<"swapped i,j:"<<i<<' '<<j<<"\n";
cout<<"swapped x,y:"<<x<<' '<<y<<"\n";
cout<<"swapped a,b:"<<a<<' '<<b<<"\n";
}