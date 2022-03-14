#include<iostream>
using namespace std;
int main(){
int *pt1 = NULL ,n;
cout<<"enter no of array "<<endl;
cin>>n;
pt1 = new int[n];
for (int i=0; i<n; i++) {
    int k=0;
    cout<<"enter element  "<<endl;
    cin >> k;
    pt1[i] = k;   
}
for (int i=0; i<n; i++) {
    cout<<endl<< pt1[i]<<endl;
}

cout<< "deleting "<<endl;
delete pt1;
}
