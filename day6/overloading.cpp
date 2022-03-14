#include <iostream>

using namespace std;

class Complex{
    int real, img;
    public:
        Complex(){
            real = 0;
            img = 0;    
        }
        
        Complex(int x, int y){
            real = x;
            img = y;
        }
        
        void display(){
            cout<<"The value for real part: "<<real<<" and img part: "<<img <<endl;
        
        }
      friend Complex operator + (Complex ob, Complex ob1);
      friend Complex operator - (Complex ob, Complex ob1);
      friend Complex operator * (Complex ob, Complex ob1);
      friend Complex operator / (Complex ob, Complex ob1);
       
       
};


        Complex operator + (Complex ob, Complex ob1){
            Complex temp;
            temp.real = ob1.real + ob.real;
            temp.img = ob1.img + ob.img;
            return temp;
        }
        Complex operator - (Complex ob, Complex ob1){
            Complex temp;
            temp.real = ob1.real - ob.real;
            temp.img = ob1.img - ob.img;
            return temp;
        }
        Complex operator * (Complex ob, Complex ob1){
            Complex temp;
            temp.real = ob1.real * ob.real;
            temp.img = ob1.img * ob.img;
            return temp;
        }
        Complex operator / (Complex ob, Complex ob1){
            Complex temp;
            temp.real = ob1.real / ob.real;
            temp.img = ob1.img / ob.img;
            return temp;
        }

int main()
{
    Complex c1,c2(5,10);
    Complex c3;
    c1.display();
    c2.display();
    c3.display();

    cout<<"The action start here: \n";
    c3=c1+c2;
    c3.display();
    c3=c1+c2;
    c3.display();
    c3=c1+c2;
    c3.display();   
    return 0;
}
