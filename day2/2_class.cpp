#include<iostream>
#include<ctime>
#include<tuple>
using namespace std;
class time1{
private:
int hour;
int minute;
int second;
void settime(){
time_t now=time(0);
tm *ltm =localtime(&now);
hour=5+ltm->tm_hour;
minute=30+ltm->tm_min;
second=tm_sec;
}
tuple<int,int,int> gettime(){
return {hour,minute,second};
}
int sleeptime(int m,int s){
return (minute-m)*60+second-s;
}
};
class date{
public:
int day;
int month;
int year;
void setdate(){
time_t now=time(0);
tm *ltm =localtime(&now);
day=ltm->tm_mday;
month=1+ltm->tm_mon;
year=1900+ltm->tm_year;
}
tuple<int, int, int> getdate(){
return {day,month,year};
}
date setdob(int d,int m,int y){
date obj;
obj.day=d;
obj.month=m;
obj.year=y;
return obj;
}
void findage(int y){
cout<<"age is "<< year-y;
}
};

int main(){
time1 t1;
t1.settime();
auto [a,b,c]=t1.gettime();
cout<<a<<b<<c;
cout<<t1.sleeptime(1,1);
date d1,d2;
d1.setdate();
auto [a,b,c]=d1.getdate();
cout<<a<<b<<c;
d2=d1.setdob(28,3,2000);
d1.findage(2000);
}
