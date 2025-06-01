// my first commit.
#include <iostream>
#include <conio.h>
#include <fstream>
class bank_account
{
  private :
            int acc_no , balance ;
  public :
            void getdata();
            void putdata();
           
};
void bank_account ::  getdata()
            {
                std::cout<<"\n Enter your Account number and balance :"<<std::endl;
                std::cin>>acc_no>>balance;
            }
void bank_account ::  putdata()
            {
                std::cout<<"\n Account no :"<<acc_no<<"\n Balance :"<<balance;
            }   
int main()
{
    bank_account B;
    B.getdata();
    B.putdata();
    return 0;
}        
