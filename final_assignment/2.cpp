#include<iostream>
#include<string>
using namespace std;
class charInput{
public:
    string value;
    virtual void add(char c){
         value+=c;
         }
    string getValue() {
        return value;
    }    
};
class numInput: public charInput{
public:
    void add(char c){
        if(isdigit(c)){
            return charInput::add(c);
        }
    }
};
int main(){
charInput* inputA = new charInput();
numInput* inputB = new numInput();
inputB->add('1');
inputB->add('a');
inputB->add('0');
cout<<inputB->getValue();
}