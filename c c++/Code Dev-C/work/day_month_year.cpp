#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int day,month,year;
	printf("nhap ngay ");
	scanf("%d",&day);
	printf("nhap thang ");
	scanf("%d",&month);
	printf("nhap nam ");
	scanf("%d",&year);
	printf("output : %02d/%02d/%02d",day,month,year%100);//format day month year
  return 0;
}













