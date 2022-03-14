#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex(){
        real = 0;
        img = 0;
    }
    complex(int x, int y){
        real =x;
        img = y;
    }
    void display(){
        cout<< "real = "<<real<<endl<<"imaginary = "<<img<<endl<<endl;
    }
    //overloading
	friend complex operator + (complex ob1, complex b2);
    friend complex operator * (complex ob1, complex b2);
    friend complex operator / (complex ob1, complex b2);
    friend complex operator - (complex ob1, complex b2);
};
complex  operator + (complex ob,complex ob1){
        complex temp;
        temp.real = ob1.real + ob.real;
        temp.img = ob1.img +ob.img;
        return temp;
    }
complex  operator - (complex ob,complex ob1){
        complex temp;
        temp.real = ob1.real - ob.real;
        temp.img = ob1.img -ob.img;
        return temp;
    }
complex  operator * (complex ob,complex ob1){
        complex temp;
        temp.real = ob1.real * ob.real;
        temp.img = ob1.img *ob.img;
        return temp;
    }
complex  operator / (complex ob,complex ob1){
        complex temp;
        temp.real = ob1.real / ob.real;
        temp.img = ob1.img /ob.img;
        return temp;
    }
int main(){
complex c1(5,5), c2(5,5);
complex c3;
c1.display();
c2.display();
c3.display();
cout<<"starting action "<<endl;
cout<<"add as a freind function"<<endl;
c3 = c1+c2;
c3.display();
cout<<"substraction "<<endl;
c3 = c1-c2;
c3.display();
cout<<"multiplication "<<endl;
c3 = c1*c2;
c3.display();
cout<<"division "<<endl;
c3 = c1/c2;
c3.display();
return 0;
}
