#include<iostream>
using namespace std;
int main(){
    int attendance,totalscore;
    float testscore;
    cout<<"enter Attendance\nTests scores\nTotal score\n";
    cin>>attendance>>testscore>>totalscore;

    if(attendance > 50 && testscore > 0.7  && totalscore > 5600){
        cout<<"res: 10"<<endl;    
    }
    else if( attendance > 50  && testscore > 0.7 && totalscore < 5600 ){
        cout<<"res: 9"<<endl;      
    }
    else if( attendance < 50 && testscore > 0.7 && totalscore > 5600 ){
        cout<<"res: 8"<<endl;        
    }
    else if( attendance > 50  && testscore < 0.7  && totalscore > 5600 ){
        cout<<"res: 7"<<endl;        
    }
    else if(attendance > 50  || testscore > 0.7   || totalscore > 5600 ){
        cout<<"res: 6"<<endl;        
    }    
    else{
        cout<<"res : 5"<<endl;
    } 
}