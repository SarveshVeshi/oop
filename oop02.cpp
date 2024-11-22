#include <iostream>
#include <conio.h>
#include <fstream>
class number
{
   private :
                int n1,n2;
    public :
            inline void getdata()
            {
                std::cout<<"\n Enter number A and number B :"<<std::endl;
                std::cin>>n1>>n2;        
            }
            inline void putdata()
            {
                std::cout<<"\n Addition of A and B is :"<<n1+n2
                <<"\n Multiplication of A and B is :"<<n1*n2
                <<"\n Subtraction of A and B is :"<<n1-n2;
            }
};
int main ()
{
    number B;
    B.getdata();
    B.putdata();
    return 0;
}