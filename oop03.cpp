#include <iostream>
#include <conio.h>
#include <fstream>
class marks2;
class marks1
{
  private:
            int m1;
   public:
            void get_marks1()
            {
                std::cout<<"\n Enter the marks of first subject :"<<std::endl;
                std::cin>>m1;
            }
            void put_marks1()
            {
                std::cout<<"Marks of first subjected :"<<m1<<std::endl;
            }
    friend void Average(marks1 p,marks2 q);
}; 
class marks2
{
   private :
                int m2;
    public :
                void get_marks2()
                {
                    std::cout<<"Enter the marks of second subject :"<<std::endl;
                    std::cin>>m2;        
                }
                void put_marks2()
                {
                    std::cout<<"marks of second subject :"<<m2;
                }
                friend void Average(marks1 p,marks2 q);
};
void Average(marks1 p, marks2 q)
   {
      std::cout<<"\nAverage :"<<(p.m1 + q.m2)/2; 
    }

int main()
{
    marks1 p;
    marks2 q;
    p.get_marks1();
    q.get_marks2();
    p.put_marks1();
    q.put_marks2();
    Average(p,q);
    return 0;
}
