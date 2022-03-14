#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1 = 4, num2 = 3;
    cout << "Before Swap"<<endl;
    cout << "Num 1 = " << num1 << " Num 2 = " << num2 << endl;
 
    swap(num1, num2);
 
    cout << "After Swap"<<endl;
    cout << "Num1 = " << num1 << " Num 2 = " << num2 << "\n";
}
