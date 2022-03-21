#include<iostream>
using namespace std;
template<class t>
class student
{
    public:
    void fun(t x)
    {
        static int i=10;
        cout<<++i<<endl;
    }
};
int main(){
    student<int> s;
    student<float> s1;
    student<double> s2;
    s.fun(1.2);
    s1.fun(20.5);
    s.fun(1);s.fun(1);
    s2.fun(20.99);

}