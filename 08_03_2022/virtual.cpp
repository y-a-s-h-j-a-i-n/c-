#include <iostream>  
using namespace std;  
class car  
{    
    public:  
    void drive()  
    {  
        cout<<"Driving \n";  
    }     
};  
  
class FuelCar : virtual public car  
{  
    public:  
    void reFillFuel()  
    {  
        cout<<"Refilling Fuel\n";
    }  
    // void indirect_drive(){
    //     drive();
    // }
};  

class ElectricCar : virtual public car{
    public:
    void battery(){
        cout<<"Recharge Battery\n";
    }
};
class hybridCar : public FuelCar, public ElectricCar{
    // void HybridCar(){
    //     indirect_drive();
    // }  
};
int main()  
{  
   car c1;
   FuelCar f1;
   ElectricCar e1;
   hybridCar h1;

   h1.battery();
   h1.reFillFuel();
   h1.drive();

    return 0;  
}
