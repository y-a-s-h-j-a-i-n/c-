#include<iostream>
#include<fstream>
using namespace std;
void find();
void add();
class Student
{
     
     int ID;
     string name;
     string branch;
     string loc;
    
     public:
     int getno()
      {return ID;}

     void getdata()
    {
     cout<<"Enter ID : ";
     cin>>ID;
     cout<<"Enter Name     : ";
     cin>>name;
    
     cout<<"Enter Branch     : ";
     cin>>branch;
    
     cout<<"Enter Location     : ";
     cin>>loc;

    }
    void display()
    {
     cout<<"=================================================\n";
     cout<<"ID : "<<ID<<"\tName  : "<<name<<"\n";
     cout<<"Branch    : "<<branch <<"\tLocation : "<<loc<<"\n";
     
    }
}s;

int main()
{
     int id;
     fstream fp("student_data.txt",ios::in|ios::out|ios::binary);
     int ch;
     cout<<"\t1: enter Student detail\n";
     cout<<"\t2: find Student\n";
     cout<<"\nEnter Your Choice  : ";
     cin>>ch;
     while(ch)
     {
           switch(ch)
           {
                  case 1: 
                            add(); break;
                  case 2:
                            find(); break;
                  default:
                         
                            try
                            {
                                throw ch;
                            }
                            catch(int)
                            {
                                cout << "exception Caught ";
                                cout << ch << "\n";
                                cout<<"enter correct digit...\n"<<endl;
                            }
           }
            cout<<"\t1: enter Student detail\n";
            cout<<"\t2: find Student\n";
            cout<<"\nEnter Your Choice  : ";
            cin>>ch;
     }
}
void find()
{
     ifstream fin("student_data.txt",ios::in|ios::binary);
     int ID,i=0;
     char found='n';
     cout<<"\nEnter ID to be find : ";
     cin>>ID;
     
     while(fin.read((char*)&s,sizeof(s)))
     {
          if(s.getno()==ID)
          {
               s.display();
               found='y';
          }
          i++;
     }
     if(found=='n') cout<<"\nThe ID "<<ID<<" is not in the file...\n";
     fin.close();
}
void add()
{
         char ch='y';
         ofstream fout("student_data.txt",ios::out|ios::app|ios::binary);
         while(ch=='y'||ch=='Y')
         {
              s.getdata();
              fout.write((char*)&s,sizeof(s));
              cout<<"\nDo you want to add more : ";
              cin>>ch;
         }
         cout<<"\nData added sucessfully\n";
         fout.close();
}
