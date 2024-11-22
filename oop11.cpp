#include <conio.h>
#include <iostream>
class base
{
    private :
                int num;
    public :
             base(int n)
             {
                num=n;
             }
             void putdata()
             {
                std::cout<<"\n number :"<<num;
             }
             base(){}
             base operator++()
             {
                base temp;
                temp.num = num;
                ++temp.num;
                return(temp);
             }
};
int main()
{
    base a(7),b;
    a.putdata();
    b = ++a; // a.operator++();
    b.putdata();
    return 0;
}