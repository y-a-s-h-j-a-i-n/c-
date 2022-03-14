#include<iostream>
using namespace std;
void add(int x){
	cout<<"Ans is "<<x<<endl;
}
void add(int x, int y){
	cout<<"Ans is "<<x+y<<endl;
}
void add(int x,int y,int z){
	cout<<"Ans is "<<x+y+z<<endl;
}
int main()
{
	add(1);
	add(1,2);
	add(1,2,3);
}
