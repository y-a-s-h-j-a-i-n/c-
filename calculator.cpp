#include<iostream>
using namespace std;
class calculator
{
	public:
	int in1,in2;
	
	void setinput(int a, int b)
	{
		in1=a;
		in2=b;
	}
	int add()
	{
		return in1+in2;
	}
	int substraction(int a,int b);
	int mul()
	{
		return in1*in2;
	}
	float divide()
	{
		float a;
		a=float(in1)/float(in2);
		return a;
	}
	float avg()
	{
		float avg;
		avg=(float(in1)+float(in2))/2;
		return avg;
	}
};
int calculator::substraction(int a,int b)
{
	return a-b;
}
int main()
{
	int x,y,v;
	calculator obj;
	cout<<"Enter 2 numbers for operation: ";
	cin>>x>>y;
	obj.setinput(x,y);
	cout<<"The inputs are "<<obj.in1<<" & "<<obj.in2<<"addition ="<<obj.add();
	cout<<"\nThe inputs are "<<obj.in1<<" & "<<obj.in2<<"multiplication ="<<obj.mul();
	cout<<"\nThe inputs are "<<obj.in1<<" & "<<obj.in2<<"division ="<<obj.divide();
	cout<<"\nThe inputs are "<<obj.in1<<" & "<<obj.in2<<"average ="<<obj.avg();
		
	cout<<"\nSubstraction = "<<obj.substraction(obj.in1,obj.in2);
	return 0;
}