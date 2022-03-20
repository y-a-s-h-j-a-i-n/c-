#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;
int main()
{
    fstream myDemo;
    string str;
    char a[100];
    int count=0
    myDemo.open("demo.txt",ios::in);
    if (!myDemo)
    {
        cout << "File has some error while openning !!!";
    }
    else
    {    
        while (myDemo>>str)
        {
            for(int i=0;i<str.length();i++){
                if(str.at(i) =='a'|str.at(i) =='A'){
                    count++;
                    break;
                }
            }
        }
        cout<<"Word having a or A are : "<<count<<"\n";  
    }
}
