#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    fstream myDemo;
    string str;
    char a[100];
    int count=0;
    myDemo.open("demo.txt",ios::in);
    if (!myDemo)
    {
        cout << "File has some error while openning !!!";
    }
    else
    {    
        while (myDemo>>str)
        {
            if(str == "the"|str == "The"|str == "THE"){
                count++;
            }
        }
        cout<<"The or THE or the count equal to "<<count<<"\n";  
    }
}
