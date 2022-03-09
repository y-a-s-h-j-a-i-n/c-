#include<iostream>
using namespace std;
class measure{
public:
int length,width,height;
void setinput(int l,int w,int h){
length=l;
width=w;
height=h;
}
int area(){
return length*width;
}
int volume(){
return length*width*height;
}
};
int main(){
measure m1;
m1.setinput(10,20,30);
cout<<"area is "<<m1.area();
cout<<"\nvolume is "<<m1.volume();
}
