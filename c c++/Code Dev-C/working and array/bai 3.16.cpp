#include <cstdlib>
#include <iostream>
#include <math.h>
#include <conio.h>
// bai 3.16
using namespace std;

int main()
{
    
     float t=1;
     int i = 0;
     float pi=0;
     while(t>0.000001){
         t= (4.0/(2*i+1));
         pi=pi*(-1)+t;
         i+=1;
     }
    cout<<"so pi = ";
    cout<<pi;
    getch();
}
