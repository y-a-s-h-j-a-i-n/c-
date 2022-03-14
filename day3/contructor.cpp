#include <iostream>
using namespace std;

class Distance{
    public:
	
          int feet,inch;
        Distance(){
            feet=8;
            inch=8;
	}
	
	Distance(int x, int y){
		feet=x;
		inch=y;
	}	
	Distance(int x, int y){
		feet=x;
		inch=y;
	}
	

	~Distance(){
                cout<<"\nInside the desctroctor is called...";
            }

};


int main()
{
    Distance d1;
    Distance d2(15,15);
	
    cout<<"Feet: "<<d1.feet<<endl;
    cout<<"Inch: "<<d1.inch<<endl;

    
    cout<<"Feet: "<<d2.feet<<endl;
    cout<<"Inch: "<<d2.inch<<endl;
    return 0;
}
