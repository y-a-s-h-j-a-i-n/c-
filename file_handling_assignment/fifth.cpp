#include<iostream>
#include<fstream>
#include<string.h>
#include <string>
using namespace std;
class Student
{
     public:
     int ID;
     string name;
     string branch;
     string loc;

     void getdata()
     {
     cout<<"Enter ID       : ";
     cin>>ID;

     cout<<"Enter Name     : ";
     cin.ignore();
     getline(cin,name);    // take input with space 

     cout<<"Enter Branch   : ";
     getline(cin,branch);

     cout<<"Enter Location : ";
     getline(cin,loc);

     }
     void display(char *arr)
     {
          string doc[]={"ID      ","Name    ","brach   ","Location"};
          int i=0;
     cout<<"=================================================\n";
     while(*arr)
     {
     if(*arr=='_')
     {
          cout<<endl;
          cout<<doc[i];
          cout<<" : ";
          i+=1;
          arr++;
          continue;
     }
     cout<<*arr;
     arr++;
     }
     cout<<"=================================================\n";
     cout<<endl;

     }
}s;

int main()
{
     int id;
     // char id_id[20];
     fstream fp("student_data.txt",ios::in|ios::out|ios::binary);
     int ch;
     char buf[100];
     cout<<endl;
     cout<<"\t1: enter Student detail\n";
     cout<<"\t2: find Student\n";
     cout<<"\nEnter Your Choice  : ";
     cin>>ch;
     while(ch){
          if(ch==1){
               char ch='y';
               ofstream fout("student_data.txt",ios::out|ios::app|ios::binary);
               while(ch=='y'||ch=='Y')
               {
                    s.getdata();
                    fout<<"_"<<s.ID<<"_"<<s.name<<"_"<<s.branch<<"_"<<s.loc<<endl;
                    cout<<"\nDo you want to add more : ";
                    cin>>ch;
               }
               cout<<"\nData added sucessfully\n\n";
               fout.close();
          }
          else if (ch==2){
               ifstream fin("student_data.txt",ios::in|ios::binary);
               int ID,i=0;
               char found='n';
               cout<<"\nEnter ID to be find : ";
               cin>>ID;
               while(fin.getline(buf,100))
               {
                    int num=0;
                    for(int j=1;j<(sizeof(buf)/sizeof(buf[0]));j++)
                    {
                         if(buf[j]=='_')
                         break;
                         num=num*10+buf[j]-'0';
                    }
                    if(num==ID)
                    {
                    s.display(buf);
                    found='y';
                    break;
                    }
               }
               if(found=='n') cout<<"\nThe ID "<<ID<<" is not in the file...\n";
               fin.close();
          }
          else{
               try
               {
                    throw ch;
               }
                    catch(int)
               {
                    cout << "exception Caught ";
                    cout << ch << "\n";
                    cout<<"\nenter correct digit...\n"<<endl;
               }
          }          
          cout<<"\t1: enter Student detail\n";
          cout<<"\t2: find Student\n";
          cout<<"\nEnter Your Choice  : ";
          cin>>ch;
     }   
}
