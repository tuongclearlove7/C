#include <stdio.h>
/*
Viết chương trình nhập vào các số nguyên: a, b, x, y, ... 
sau đó in ra màn hình kết quả của các biểu thức sau:
a/ x+y/2+x/y
b/ (a+4)(b-2c+3)/r/2h-9(a-1)
c/ x^y, x > 0
 */
int main() 
{
	int a,b;
	printf("nhap a: ");
	scanf("%d",&a);
	
	printf("nhap b: ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a= %d\nb= %d",a,b);
	
	return 0;
}











