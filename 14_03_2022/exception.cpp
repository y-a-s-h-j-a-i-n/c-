#include<iostream>
using namespace std;
class test{
    int x;
    public:
    void read(){
        cout<<"enter a number =";
        cin>>x;
    }
    class EVEN{};
    class ODD{};
    void check(){
        if(x%2==0)
        throw EVEN();    // nestedd class home work
        else
        throw ODD();
    }
};
int main(){
    test t;
    t.read();
    try{
        t.check();
    }
    catch(test::EVEN)
    {
        cout<<"number is even";
    }
    catch(test::ODD)
    {
        cout<<"number is odd";
    }
}