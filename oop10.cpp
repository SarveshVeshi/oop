#include<conio.h>
#include<iostream>
void swap(int &a,int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}
void swap(float &c, float &d)
{
    float temp;
    temp = c;
    c = d;
    d = temp;
}
void swap(char &e , char &f)
{
    char temp;
    temp = e;
    e = f;
    f = temp;
}
int main ()
{
    int num1 = 10,num2 = 20;
    float num3 = 30.7,num4=40.3;
    char ch1='C',ch2='R';
    std::cout<<"\n Before swap :  ";
    std::cout<<"\n integer number : "<<num1<<"\t"<<num2;
    std::cout<<"\n float number : "<<num3<<"\t"<<num4;
    std::cout<<"\n character : "<<ch1<<"\t"<<ch2;
    swap(num1,num2);
    swap(num3,num4);
    swap(ch1,ch2);
    std::cout<<"\n After swap: ";
    std::cout<<"\n integer number : "<<num1<<"\t"<<num2;
    std::cout<<"\n float number : "<<num3<<"\t"<<num4;
    std::cout<<"\n character : "<<ch1<<"\t"<<ch2;
    return 0;
}