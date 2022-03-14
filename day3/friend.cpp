#include <iostream>
using namespace std;
class A
{
    int n1,n2;
  public:
    void setdata(int a,int b)
    {
      n1=a;
      n2=b;
    }

  
    friend int add(A a);
};
int add(A a)
{
  return (a.n1+a.n2);
}

int main()
{
  A n1;
  n1.setdata(10,20);
  cout << "Sum = " << add(n1) << endl;
  return 0;
}
