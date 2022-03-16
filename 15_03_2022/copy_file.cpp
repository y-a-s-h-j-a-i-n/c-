#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream readFile,writeFile;
    int count = 0;
    char c;
    readFile.open("p1.File.txt",ios::in); 
    writeFile.open("writefile.txt",ios::out);
    if (!readFile) 
    {
        cout << "File is not opened...!";
    }
    else
    {
        
        while (!readFile.eof())
        {
            readFile.get(c);
            if(c==32)
                count++;
            writeFile << c;
        }
        cout<<"Copy Done...!\n";
        cout<<"Total space is:"<<count<<endl;
    }
    readFile.close();
    writeFile.close();
}
