 #include <fstream>
 #include <conio.h>
 #include <iostream>
 class mobile 
 {
   private :
             int price;
             char model_number[10];
   public :
            void getdata()
            {
                std::cout<<"\n  Enter the price and model number of the mobile :"<<std::endl;
                std::cin>>price>>model_number;
            }
            void putdata()
            {
                std::cout<<"\n price :"<<price<<std::endl;
                std::cout<<"model number :"<<model_number<<std::endl;
            }

 };
 int main()
 {
    mobile M[5];
    for(int i=0;i<5;i++)
       {
        printf("\n object %d",i+1);
        M[i].getdata();
       }
    for(int i=0;i<5;i++)
       {
        printf("\n object %d",i+1);
        M[i].putdata();
       }
    return 0;
 }