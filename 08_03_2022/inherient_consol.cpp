#include <iostream>  
using namespace std;  
class base{
    int x;
    public:
        base(){
            cout<<"Base default constrictor\n";
        }
        ~base(){
            cout<<"Base destrictor\n";
        }
};
class derived : public base{
    int y;
    public:
        derived(){
            cout<<"derived default contrictor\n";
        }
        derived(int i){
            cout<<"perameterized constrictor\n";
        }
        ~derived(){
            cout<<"derived destrictor\n";
        }
};
int main(){
    base b;
    derived d;
    derived d2(5);
}
