#include <cstdlib>
#include <iostream>
#include<conio.h>
//bài 3.11
int main()
{   
    int i,n,s=0,x;
    std::cout<<"nhap n : ";
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        std::cout<<"nhap x : ";
        std::cin>>x;
        std::cout<<x+s;
    }
    std::cout<<"tong la : ";
   getch();   
}
