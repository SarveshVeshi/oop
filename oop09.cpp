#include <conio.h>
#include <fstream>
#include <iostream>
class polygon
{
    protected :
                int width,height;
    public :
                void getdata()
                {
                    std::cout<<"\n enter width and height :"<<std::endl;
                    std::cin>>width>>height;
                }
                void putdata()
                {
                    std::cout<<"\n width :"<<width<<"\n height :"<<height;
                }
                virtual void area () {}
};
class rectangle : public polygon
{
    public :
                void area () 
                {
                   std::cout<<"\n Area of a rectangle :"<<width * height ;
                }
};
int main ()
{
    polygon *ptr;
    rectangle R;
    R.getdata();
    R.putdata();
    ptr = &R;
    ptr->area();
    return 0;
}