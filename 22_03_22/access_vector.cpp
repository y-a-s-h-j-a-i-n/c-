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
// while(p!=v.end())
// {
//     *p=i+'a';
//     p++;
//     i++;
// }
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
}
