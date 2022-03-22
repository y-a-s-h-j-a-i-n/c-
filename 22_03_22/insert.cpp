#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<char> v;
vector<char>::iterator p;
int i;
p=v.begin();
i=0;
for(i=0;i<10;i++){
    v.push_back(i+'a');
}
cout<<"original contents:\n";
p=v.begin();
while(p!=v.end())
{
    cout<<*p<<" ";
    p++;
}
p=v.begin();
while(p!=v.end()){
    *p=toupper(*p);
    p++;
}
cout<<"modified contents:\n";
p=v.begin();
while(p!=v.end()){
    cout<<*p<<" ";
    p++;
}
// p=v.begin();
v.insert(p,'I');
p=v.begin();
for(i=0;i<v.size();i++)
{
    cout<<*p;
    p++;

}
p=v.begin();
v.erase(p,p+6);
cout<<endl;
for(i=0;i<v.size();i++)
{
    cout<<*p;
    p++;

}
}
