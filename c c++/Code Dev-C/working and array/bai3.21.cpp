#include <iostream>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
//bai 3.21
int main()
{
	int a, b;
	cout<<"nhap a = ";
	cin>>a;
	cout<<"nhap b = ";
	cin>>b;
	if (a > b)
	{
		return 0;
	}
	for (int i = a; i <= b; ++i)
	{
		for (int j = 2; j < i; j++)
		{
			if (i%j != 0)
			{
				cout<<i;
				cout<<"\n";
			}
		}
	}
	getch();
}
