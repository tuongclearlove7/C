#include <iostream>
#include <math.h>
#include <conio.h>
// bai 3.18
using namespace std;
int main() {
     int a;
     int b;
     cout<<"nhap a : ";
     cin>>a;
     cout<<"nhap b : ";
     cin>>b;
     while(a!=b){
     if(a>b){
     a=a-b;
     cout<<"uoc chung nho nhat la : ";
     cout<<a;
     cout<<"\n";
  }
    else{
        b=b-a;
        cout<<"uoc chung lon nhat la : ";
        cout<<b; 
        cout<<"\n";
     }
}
     getch();
}
