#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int t,n;
    cout<<"nhap thang : ";
    cin>>t;
    switch(t){
        case 1:
        case 3:
        case 5:
        case 8:
        case 10:
        case 12:
        cout<<"thang nay co 31 ngay";
        break;
        case 4:
        case 9:
        case 11:
        cout<<"thang nay co 30 ngay";
        break;
        case 2:
        cout<<"nhap nam : ";
        cin>>n;
if(n%100!=0&&4==0||n%400==0){
    cout<<"thang nay co 29 ngay";
}
else{
    cout<<"thang nay co 28 ngay";
}
    break;
    default:
        cout<<"ban da nhap sai ";
        break;
    }
}
