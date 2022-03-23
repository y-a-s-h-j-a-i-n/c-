#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,int> m;
    int i;
    for(i=0;i<26;i++)
    m.insert(pair<char,int>('A'+i,65+i));
    char ch;
    int z;
    cout<<"enter key(an uppercase letter): ";
    cin>>ch;
    cout<<m[ch]<<endl;
    map<char,int>::iterator p;
    p=m.find(ch);
    if(p!=m.end())
    cout<<"its ASSIC value is "<<p->second;
    else
    cout<<"key not in map.\n";    
}