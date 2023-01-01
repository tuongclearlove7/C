#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
int hour=0,minute=0,second=0;
	printf("Nhap so giay :");
	scanf("%d",&second);
	if(second<60)
        printf("output : %d/%d/%d",hour,minute,second);
    else if(second>=60&&second<3600){
        minute=(second-second%60)/60;
        second%=60;
        printf("output : %d/%d/%d",hour,minute,second);
    }
    else{
        hour=(second-second%3600)/3600;
        minute=((second%3600)-(second%3600)%60)/60;
        second=second-minute*60-hour*3600;
        printf("output : %d/%d/%d",hour,minute,second);
    }
     return 0;
}
