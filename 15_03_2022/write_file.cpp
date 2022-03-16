#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream myFile;
    string str , str1;
    myFile.open("p2.File.txt",ios::in);
    if (!myFile) // checking file in open or not negative value means not opened
    {
        cout << "File is not opened...!";
    }
    else
    {
        cout << "File is opened..!\n";
        while (!myFile.eof())
        {
            /* code */
            myFile >> str>>str1;
            // readbuf = getc(myFile);
            cout << str << '\t'<<str1<<'\t';
        }
        cout<<"Writing in file\n";
        myFile << "Writing in file\n";
    }
}
