#include<iostream>
using namespace std;
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int rad(int b,int red){    /// b=2   red=4
    int answer=0;
    answer=(factorial(red-1)/(factorial(red-1-(b-1))*factorial(b-1)));
    return answer;
}
int main(){
    int white,red,bags;
    cout<<"enter White\nRed\nBags"<<endl;
    cin>>white>>red>>bags;
    int b=1;
    int answer=0;
    for(int i=0;i<bags-1;i++){
        if(white>=bags-b&&red/2>=b){
            answer+=(factorial(white)/(factorial(bags-b)*factorial(white-(bags-b))))*rad(b,red);
        }
        b+=1;        
    }
    cout<<answer<<endl;
}