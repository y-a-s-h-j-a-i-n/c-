#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> v(10);
    int i;
    cout<<"Size="<<v.size()<<endl;
    for(i=0;i<10;i++)
    v[i]=i+'a';
    cout<<"current contents:\n";
    for(i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<"\n\n";
    cout<<"Expanding vector\n";
    for(i=0;i<10;i++)
    v.push_back(i+10+'a');
    cout<<"Size now="<<v.size()<<endl;
    cout<<"current conternts: \n";
    for(i=0;i<v.size();i++)
    v[i]=toupper(v[i]);
    cout<<"Modififed Contents:\n";
    for(i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
}