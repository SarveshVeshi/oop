#include<conio.h>
#include<iostream>
#include<fstream>
class employee 
{
  private :
            int empid,empcode;
   public :
            void getemp()
            {
                std::cout<<"\n Enter the employee ID and code :"<<std::endl;
                std::cin>>empid>>empcode;
            }
            void putemp()
            {
                std::cout<<"\n employee ID:"<<empid<<"\n employee code:"<<empcode;
            }
};
class programmer : public employee
{
    private :
                char skill[10];
    public  :
                void getprogrammer()
                {
                    std::cout<<"\n Enter the skill :"<<std::endl;
                    std::cin>>skill;
                }
                void putprogrammer()
                {
                    std::cout<<"\n skill:"<<skill<<std::endl;
                }
};
class manager : public employee
{
   private :
                char department[10];
   public :
            void getmanager()
            {
                std::cout<<"\n Enter the department:"<<std::endl;
                std::cin>>department;
            }
            void putmanager()
            {
                std::cout<<"\n department:"<<department;
            }
};
int main()
{
    programmer P;
    manager M;
    printf("\n Programmer:");
    P.getemp();
    P.getprogrammer();
    P.putemp();
    P.putprogrammer();
    printf("\n Manager :");
    M.getemp();
    M.getmanager();
    M.putemp();
    M.putmanager();
}