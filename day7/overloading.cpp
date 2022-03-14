#include <iostream>
using namespace std;
class space {
  int x,y,z;
  public:
  space(){
      x=y=z=0;
  }
  space(int a,int b,int c){
      x=a;
      y=b;
      z=c;
  }
  void display(){
      cout<<"\nX="<<x<<", y="<<y<<", z="<<z;
      }
      void operator--();
      void operator--(int);
      void operator++();
      void operator++(int);
};

void space::operator--(){
    x=--x;
    y=--y;
    z=--z;
}
void space::operator++(){
    x=++x;
    y=++y;
    z=++z;
}

int main()
{
    space s1(100,50,10);
    s1.display();
    --s1;
    s1.display();
    
    return 0;
}
