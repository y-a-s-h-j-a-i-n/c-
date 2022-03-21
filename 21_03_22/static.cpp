#include<iostream>
using namespace std;
template<typename t>
void fun(t x){
    static int i=10;
    cout<<++i<<endl;
}
int main(){
    int x=5;
    fun<int>(2);
    fun<int>(2);
    fun<int>(2);
    fun<double>(10.1);
}
