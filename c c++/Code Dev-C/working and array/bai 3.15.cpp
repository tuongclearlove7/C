#include <cstdlib>
#include <iostream>
#include<conio.h>
//bài 3.15
using namespace std;
int main()
{
    float diem,dem=0;
    do{
    cout<<"nhap dien tb : ";
    cin>>diem;
    if(diem<0||diem>10){
    cout<<"ban da nhap sai";
    dem++;
    }
    
    if(dem==3){
     cout<<"nhan da nhap sai 3 lan";
     return 0;
      }
   }while(diem<0||diem>10);
   if(diem<5){
    cout<<"xep loai yeu";
    }
   else if(diem<7){
     cout<<"xep loai trung binh";
   }
   else{
     cout<<"xep loai gioi";
   }
   getch();
}
