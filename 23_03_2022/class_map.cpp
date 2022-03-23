#include<iostream>
#include<map>
#include<string.h>
using namespace std;
class name{
    char str[40];
    public: name(){
        strcpy(str,"");
    }
    name(char *s){ strcpy(str,s);}
    char *get(){ return str;}
};
bool operator<(name a,name b){
    return strcmp(a.get(),b.get())<0;
}
class phoneNum{
    char str[80];
    public:phoneNum(){
        strcmp(str,"");
    }
    phoneNum(char *s){ strcpy(str,s);}
    char *get(){return str;}
};
int main(){
    map<name,phoneNum>directory;
    directory.insert(pair<name,phoneNum>(name("Empl"),phoneNum("555-1111")));
    directory.insert(pair<name,phoneNum>(name("Emp2"),phoneNum("555-2222")));
    directory.insert(pair<name,phoneNum>(name("Emp3"),phoneNum("555-3333")));
    directory.insert(pair<name,phoneNum>(name("Emp4"),phoneNum("555-4444")));
    char str[80];
    cout<<"enter name:";
    cin>>str;
    map<name,phoneNum>::iterator p;
    p=directory.find(name(str));
    if(p!=directory.end())
    cout<<"phone numbver:"<<p->second.get();
    else
    cout<<"name not in dictornry.\n";
}
