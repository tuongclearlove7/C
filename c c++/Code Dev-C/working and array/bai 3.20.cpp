#include <iostream>
#include <math.h>
#include <conio.h>
// bai 3.20
int main(){
    int n;
    int count = 0;
    std::cout<<"Nhap n =  ";
    std::cin>>n;
    if(n < 2){
        std::cout<<" khong phai so nguyen to";
        std::cout<<n;
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;   
        }
    }
    if(count == 0){
        std::cout<<n;
        std::cout<<" la so nguyen to";
    }else{
        std::cout<<n;
        std::cout<<" khong phai so nguyen to";
    }
     getch();
}
