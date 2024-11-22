#include <iostream>
#include <conio.h>
#include <fstream>
class book
{
    private :
              char book_name[20],author_name[20];
              float price ;
    public :
             void getdata()
             {
                std::cout<<"\n Enter the book name,author name and price : "<<std::endl;
                std::cin>>book_name>>author_name>>price;
             }
             void putdata()
             {
                std::cout<<"\n Book name :"<<book_name<<"\n Author name :"<<author_name<<"\n price :"<<price;
             }
};
int main ()
{
    book B,*ptr;
    ptr=&B;
    (*ptr).getdata();
    ptr->putdata();
    return 0;
}