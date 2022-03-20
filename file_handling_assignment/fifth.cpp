#include <iostream>
#include <fstream>
using namespace std;
class student
{
public:
    int roll;
    char name[25];
    char branch[25];
    char loc[25];

    void getData()
    {
        cout << "Enter Student ID: ";
        cin >> roll;
        cout<< "Enter Student Name: ";
        cin >> name;
        cout << "Enter Branch Name: ";
        cin >> branch;
        cout<< "Enter Location: ";
        cin>> loc;
    }
    void addRecord()
    {
        fstream f;
        student stu;
        f.open("student.dat", ios::app | ios::binary);
        stu.getData();
        f.write((char *)&stu, sizeof(stu));
        f.close();
    }
    void display()
    {
        fstream f;
        student s;

        int temp_id, flag=0;
        cout<<"\nEnter  ID: ";
        cin>>temp_id;
        f.open("student.dat", ios::in | ios::binary);
        try{
            if(f)
                cout<<"File Open successfully !\n";
            else
                throw 1; 
        }
        catch(int a){
            cout<<"[EXCEPTION]: File can't opened\n";
        }

        while (f.read((char *)&s, sizeof(s)))
        {
            if(s.roll == temp_id){
                cout<<"----------------------------------------------\n";
                cout << "Student ID: " << s.roll << "\nName: " << s.name << "\nBranch: " << s.branch <<"\nLocation: "<<s.loc <<endl;
                flag=1;
                cout<<"----------------------------------------------\n";
            }
        }
        if(flag==0){
            cout<<"\n-----No record found-----\n\n";
        }

        f.close();
    } 
}; 

int main()
{
    int i=0;
    student s1;
    
    while(1){
        cout<<"----------------------------------------------\n";
        cout<<"Press 1 student details register \nPress 2 views student details\n";
        cout<<"Press 3 for exit\n";
        cin>>i;
        cout<<"----------------------------------------------\n";
        switch (i)
        {
        case 1:
            s1.addRecord();
            break;
        
        case 2:
            s1.display();
            break;

        case 3:
            exit(1);


        default:
            cout<<"please select valid choices\n";
            break;
        }
    }
}
