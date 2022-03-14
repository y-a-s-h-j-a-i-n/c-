#include <iostream>
using namespace std;
class A
{
	int a,b;
    
	public:
	
	        A(){
		a = 0;
		b = 0;
		}
		
		
		void setdata(int x,int y);
		
		// display function
		void display(){
		cout << "The value of a is : " << a << " and value of b is: " << b << endl;
		}
 
    			
    					
        
//overloading the '++' operator
A operator ++(A obj){ // this work for pre-increment ++value
A temp;
temp.a = ++a;
temp.b = ++b;
return temp;   
}

//overloading the '--' operator
A operator --(A obj){ // this work for pre-increment ++value
A temp;
temp.a = --a;
temp.b = --b;
return temp;   
}
                
}; // end of class A

void A :: setdata(int x,int y){
   
    a = x;
    b = y;
}

//friend function


int main()
{
    A ob1,ob2,ob3;
    ob1.setdata(10,20);
    ob2.setdata(20,30);
    ob3 = ++ob1;
    ob3.display();
    ob3 = --ob2;
    ob3.display();
}
