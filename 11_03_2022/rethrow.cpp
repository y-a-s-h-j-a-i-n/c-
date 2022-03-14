#include<iostream>
using namespace std;
int main()
{
    int a=1;
    try{
        try{
            throw a;
        }
        catch(int x)
        {
            cout<<"\n exeption in inner try-catch block.";
            cout<<x;
            throw x;
        }
    }
    catch(int x){
        cout<<"\n agjkdhadjkf sdjkfbjkfdjkf";
        cout<<x;
    }
}
