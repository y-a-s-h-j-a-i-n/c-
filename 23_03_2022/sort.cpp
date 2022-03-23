#include<list>
#include<iostream>
using namespace std;
int main(){
    list<int> lst1,lst2;
    int i;
    int a;
    for(i=0;i<10;i+=2)
    {
        cin>>a;
        lst1.push_back(a);
    }
    for(i=1;i<11;i+=2)lst2.push_back(rand()%20);
    cout<<"Contents of lst:\n";
    list<int>::iterator p=lst1.begin();
    while(p!=lst1.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    cout<<"Contents of lst2:\n";
    p=lst2.begin();
    while(p!=lst2.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    lst1.merge(lst2);
    lst1.sort();
    p=lst1.begin();
    while(p!=lst1.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    if(lst2.empty())
    cout<<"lst2 is now empty";
}
