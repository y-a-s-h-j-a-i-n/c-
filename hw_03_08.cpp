#include<iostream>
using namespace std;
class student
{
public:
char name[20];
int rollno;
void insert1()
{
cout<<"enter your name than rollnumber :"<<endl;
cin>>name;
cin>>rollno;
}
};
class marks
{
public:
int mark[5];
void insert2()
{
cout<<"enter you 5 subject marks :\n";
cin>>mark[0];
cin>>mark[1];
cin>>mark[2];
cin>>mark[3];
cin>>mark[4];
}
};
class result:public student,public marks
{
public:
/*int tm;
float percentage;
tm=marks.mark[1];
percentage=tm*0.2;*/
void output()
{
cout<<mark[0]+mark[1]+mark[2]+mark[3]+mark[4]<<endl;
cout<<(mark[0]+mark[1]+mark[2]+mark[3]+mark[4])*0.2<<endl;
}
};


int main(){
result r1;
r1.insert1();
r1.insert2();
r1.output();
}

