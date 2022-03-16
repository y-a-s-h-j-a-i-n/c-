#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream myFile;
    string str;
    char a[100];
    int count=0;
    myFile.open("p2.File.txt",ios::in);
    if (!myFile) 
    {
        cout << "File is not opened...!";
    }
    else
    {
        cout << "File is opened..!\n";
        while (!myFile.eof())
        {
            a[count] = myFile.get();
            cout<<a[count]<<"    ";
            count++;
        }

        cout<<"Total words in files : "<<count<<"\n";
       
    }
}
