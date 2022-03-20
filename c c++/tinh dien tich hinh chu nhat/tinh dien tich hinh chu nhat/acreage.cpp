#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14159
int main()
{
	float a, b, goc, s;
	cout << "Nhap a="; cin >> a;
	cout << "Nhap b="; cin >> b;
	cout << "Nhap goc="; cin >> goc;
	goc = goc * PI / 180;
	s = a * b * sin(goc) / 2;
	cout << "Dien tich tam giac la: " << s;
}
	