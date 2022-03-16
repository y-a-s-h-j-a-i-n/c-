#include<iostream>
#include<fstream>
using namespace std;
class student{
public:int roll;char name[25];float marks;
void getdata(){
cout<<"enter roll no and name"<<endl;
cin>>roll>>name;
cout<<"marks"<<endl;
cin>>marks;
}
void display(){
//fstream f;
student s1,s2;
//f.open("student.dat",ios::in|ios::binary);
//f.read((char*) &s1,sizeof(s1));
cout<<"roll "<<s1.roll<<"name "<<s1.name<<"marks "<<s1.marks<<endl;
//f.close();
//f.open("student.dat",ios::in|ios::binary);
//f.read((char*) &s2,sizeof(s2));
cout<<"roll "<<s2.roll<<"name "<<s2.name<<"marks "<<s2.marks<<endl;
//f.close();
}
void addrecord(){
fstream f;
student stu[2];
//f.open("student.dat",ios::app|ios::binary);
stu[0].getdata();
//f.write((char*)&stu[0],sizeof(stu[0]));
//f.close();
//f.open("student.dat",ios::app|ios::binary);
stu[1].getdata();
//f.write((char*)&stu[1],sizeof(stu[1]));
//f.close();
}
};
int main(){
student s[2];
int i=0;
char ch='n';
do{
s[i].addrecord();
cout<<"want add more?(y/n)"<<endl;
cin>>ch;
i++;
}while(ch=='y'||ch=='Y');
cout<<"update!!!"<<endl;
s[1].display();
}


