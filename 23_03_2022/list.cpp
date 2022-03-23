#include<list>
#include<iostream>
using namespace std;
int main(){
    list<int> lst;
    // size();
    // puch_back();
    // begin();
    // end();
    int i;
    for(i=0;i<10;i++)
    lst.push_back(i);
    cout<<"size:"<<lst.size()<<endl;
    cout<<"contents:";
    list<int>::iterator p=lst.begin();
    while(p!=lst.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    p=lst.begin();
    while(p!=lst.end()){
        *p=*p+100;
        p++;
    }
    cout<<"contents modifications: ";
    p=lst.begin();
    while(p!=lst.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    lst.push_back('a');
    p=lst.end();
    p--;
    lst.erase(p);
    p=lst.end();
    while(p!=lst.begin()){
        p--;
        cout<<*p<<" ";
    }
    
    // cout<<*p;
}