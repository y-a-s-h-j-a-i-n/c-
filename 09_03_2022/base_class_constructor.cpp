#include<iostream>
using namespace std;
class base1{
protected:
int i;
public:
base1(int x){ i=x;cout<<"constructing basr1";}
~base1(){ cout <<"destructing base1\n";}
};
class base2{
protected:
int k;
public:
base2(int x){ k=x;cout<<"constructing base2";}
~base2(){cout<<"Destructing base2\n";}
};

class derived:public base1,public base2{
int j;
public:
derived(int x,int y,int z): base1(y),base2(z)
{
j=x;
cout<<"constructoring derived\n";}
~derived(){ cout << "destruction derived \n";}
void show(){ cout <<i << " " << j << " " << k;}
};
int main(){
derived d(1,2,3);
d.show();
}
