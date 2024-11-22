#include<conio.h>
#include<iostream>
#include<fstream>
class employee 
{
  protected :
            int empid,empcode;
   public :
            void getemp()
            {
                std::cout<<"\n Enter the employee ID and code :"<<std::endl;
                std::cin>>empid>>empcode;
            }
           virtual void display() {}
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
                void display()
                {
                    std::cout<<"\n employee ID:"<<empid<<"\n employee code:"<<empcode;
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
            void display()
            {
                std::cout<<"\n employee ID:"<<empid<<"\n employee code:"<<empcode;
                std::cout<<"\n department:"<<department;
            }
};
int main()
{
    employee *ptr;
    programmer P;
    manager M;
    P.getemp();
    P.getprogrammer();
    ptr = &P;
    ptr->display();
    M.getemp();
    M.getmanager();
    ptr = &M;
    ptr ->display();
    return 0;
}