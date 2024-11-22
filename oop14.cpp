#include<conio.h>
#include<iostream>
#include<fstream>
int main ()
{
    std::ifstream fin;
    fin .open("file1.txt");
    std::ofstream fout;
    fout .open("file2.txt");
    char ch;
    while (fin)
      {
        fin.get(ch);
        fout.put(ch);
      }
    fout.close();
    fin.close();
    return 0;
}