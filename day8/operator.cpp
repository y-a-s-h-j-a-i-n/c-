#include <iostream>
using namespace std;

int main(){ 
    //declartion of variables 
    int *ptr1, *ptr2, sum;
    //allocated memory space using new operator
    ptr1 = new int;
    ptr2 = new int;
    cout<<" Enter the first number: \n";
    cin>> *ptr1;
    cout<< " Enter the second number: \n";
    cin>> *ptr2;
    sum = *ptr1 + *ptr2;
    cout<<"Sum is : "<<sum<<endl;
    //deleting pointer variables
    delete(ptr1);
    delete(ptr2);
}
