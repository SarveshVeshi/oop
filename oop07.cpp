#include<conio.h>
#include<fstream>
#include<iostream>
class cricketer 
{
  protected  :
            char name[10];
  public :
            void getcricketer()
            {
                std::cout<<"\n Enter the name :"<<std::endl;
                std::cin>>name;
            }
            void putcricketer()
            {
                std::cout<<"\n Name:"<<name;
            }
};
class bolwer :  virtual public   cricketer 
{
  protected  :
            int no_of_wickets;
  public :
            void getbolwer()
            {
                std::cout<<"\n enter number of wickets :"<<std::endl;
                std::cin>>no_of_wickets;
            }
            void putbolwer()
            {
                std::cout<<"\n number of wickets:"<<no_of_wickets;
            }
};
class batsman : virtual public cricketer
{
    protected  :
                int runscore;
    public  :
                void getbatsman()
                {
                    std::cout<<"\n Enter run scored :"<<std::endl;
                    std::cin>>runscore;
                }
                void putbatsman()
                {
                    std::cout<<"\n Runscore:"<<runscore<<std::endl;
                }
};
class allrounder : public batsman, public bolwer
{
  public :
            void putallrounder()
            {
                if(no_of_wickets>5 && runscore>100)
                  {
                    std::cout<<"\n The player is All Rounder ";
                  }
            }
};
int main ()
{
 allrounder R;
 R.getcricketer();
 R.getbolwer();
 R.getbatsman();
 R.putcricketer();
 R.putbolwer();
 R.putbatsman();
 R.putallrounder();
 return 0;
}
