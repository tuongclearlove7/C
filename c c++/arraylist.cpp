#include<iostream>
#include<conio.h>
#include<string>

void input(int arr[],int n) {
for (int i=0; i<=n; i++) {
   std::cout<<"nhập phần tử trong mảng : ";
   std::cin>>arr[i];

    }
}

void output(int arr[],int n) {
for(int i=0; i<=n; i++) {
std::cout<<"my array = "<<"["<<arr[i]<<"]";
std::cout<<"\n";

    }
}
void arraystring(){
    char arr[10000];
    std::cout<<"nhập string : ";
    std::cin>>arr;
    std::cout<<arr;
}

int main() {
    int arr[500000];
    int n;
std::cout<<"nhập số phần tử trong mảng : ";
    std::cin>>n;
    input(arr,n);
    output(arr,n);
    arraystring();
}










    