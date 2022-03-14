#include<iostream>
using namespace std;
int main(){
int *pt1,*pt2,sum;
pt1 = new int;
pt2 = new int;
cout<<"enter 1st no"<<endl;
cin>>*pt1;
cout<<"enter 2nd no"<<endl;
cin>>*pt2;
sum = *pt1+*pt2;
cout<< "sum is  = "<<sum<<endl;
delete pt1;
delete pt2;
}
