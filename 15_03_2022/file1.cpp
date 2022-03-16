#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream myFile;
    string readbuf;
    myFile.open("p1.File.txt", ios::in);
    if (!myFile) 
    {
        cout << "File is not opened...!";
    }
    else
    {
        cout << "File is opened..!\n";
        getline(myFile,readbuf);// read whole one line at a time
        cout<<"With readLine \n"<<readbuf<<endl;
    }
}
