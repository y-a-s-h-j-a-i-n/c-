#include <iostream>  
using namespace std;
class base{
    protected:
    int i, j;
    public:
    void set(int a, int b){
        i=a;
        j=b;
    }
    void show(){
        cout<<i<<" "<<j<<endl;
    }
};
class derived1 : public base{
    int k;
    public:
    void setk(){
        k=i*j;
    }
    void showk(){
        cout<<k<<" "<<j<<endl;
    }
};
class derived2 : private derived1{
    int m;
    public:
    void setm(){
        m=i-j;
    }
    void showm(){
        cout<<m<<" "<<j<<endl;
    }
};
int main(){
    derived1 ob1;
    derived2 ob2;
}
