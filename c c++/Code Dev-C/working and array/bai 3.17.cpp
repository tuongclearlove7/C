#include <iostream>
#include <math.h>
#include <conio.h>
// bai 3.17
using namespace std;
int main() {
     int n,i;
     cout<<"nhap n : ";
     cin>>n;
     for(i=1;i<=n;i+=1){
     if(n%i==0)
     cout<<"uoc chung cua n la ";
     cout<<i;
     cout<<"\n";
     }
     getch();
}
