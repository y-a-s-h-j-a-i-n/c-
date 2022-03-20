#include <iostream>
#include <fstream>
#include<string.h>
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
                int l = str.length()-1;
                if(str.at(l) =='s' | str.at(l) =='S'){
                    count++;
                }
        }
        cout<<"word end with s or S are: "<<count<<"\n";  
    }
}
