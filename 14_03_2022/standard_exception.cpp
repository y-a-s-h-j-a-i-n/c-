#include<iostream>
#include<exception>
using namespace std;
int main(){
    try{
        int * myarray =new int[100];
    }
    catch(exception &e){
        cout<<"std hey i am yash exception "<<e.what()<<endl;
    }
}