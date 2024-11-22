#include<conio.h>
#include<iostream>
#include<fstream>
#include<string.h>
class student
{
   private :
             int roll_no;
             char name[20];
    public :
             student(int r,char n[20])
             {
                roll_no=r;
                strcpy(name,n);
             }
             void putdata()
             {
                std::cout<<"\n roll no :"<<roll_no<<"\n name:"<<name;
             }

};
int main()
{
  student S(07,"Cristiano_Ronaldo");
  S.putdata();
  return 0;
}