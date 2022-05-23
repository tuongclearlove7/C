#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
int a, b, c, d, min, max;

std::cout<<"Nhap so nguyen thu nhat a = ";
std::cin>>a;
std::cout<<"Nhap so nguyen thu hai b= " ;
std::cin>>b;
std::cout<<"Nhap so nguyen thu ba c= ";
std::cin>>c;
std::cout<<"Nhap so nguyen thu tu d= ";
std::cin>>d;
min = a;
if(a>=b){
    min=b;
}

if(b>=c){
    min = c;
}
if(c>=d){
    min = d;
}
std::cout<<"gia tri min = ",
std::cout<<min;
std::cout<<"\n";
max = a;
if(a<=b){
	max = b;
}

if(b<=c){
	max = c;
}

if(c<=d){
	max = d;
}
std::cout<<"gia tri max = ";
std::cout<<max;

}
