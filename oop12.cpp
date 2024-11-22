#include<conio.h>
#include<iostream>
class base 
{
    private :
                int real,imaginary;
    public :
                base(int r,int i)
                {
                    real=r;
                    imaginary = i;
                }
                void putdata()
                {
                    std::cout<<"\n complex number : "<<real<<"+"<<imaginary<<"i";
                }
                base(){}
                base operator+(base b)
                {
                    base temp;
                    temp.real = real + b.real;
                    temp.imaginary = imaginary + b.imaginary;
                    return (temp);
                }
};
int main ()
{
    base a(10,20),b(30,40),c;
    a.putdata();
    b.putdata();
    c = a + b;
    c.putdata();
    return 0;
}