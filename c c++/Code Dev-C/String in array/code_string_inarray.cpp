#include <iostream>
#include <string.h>
#include <ctype.h>
#include <conio.h>
using namespace std;
int dem_tu(char str[])//1
{
	int dem=0;
	for(int i=0; i < strlen(str); i++)
	if(str[i]==' ')dem++;
	return dem+1;
}
int demkt_hoa(char str[])//2
{
	int dem=0;
	for(int i=0; i < strlen(str); i++)
	if(isupper(str[i])!=0)dem++;
	return dem;
}
int demkt_thuong(char str[])//3
{
	int dem=0;
	for(int i=0; i < strlen(str); i++)
	if(islower(str[i])!=0)dem++;
	return dem;
}
char * chuyen_ho_hoa(char str[])//4
{
	strlwr(str);
	for(int i=0; i < strlen(str) && str[i]!=' '; i++)
	 str[i]= toupper(str[i]);
	 return str;
}
char * chuyen_ten_hoa(char str[])//5
{
	strlwr(str);
	for(int i=strlen(str)-1; i > 0 && str[i]!=' '; i--)
	 str[i]= toupper(str[i]);
	 return str;}
char * chuyen_kt_dau_hoa(char str[])//6
	{
	strlwr(str);
	str[0]=toupper(str[0]);
	for(int i=0; i < strlen(str); i++)
	if (str[i]==' ') str[i+1]=toupper(str[i+1]);
	return str;
}
void tach_ho(char str[])//7
{
	for(int i=0; i < strlen(str); i++)
	{
	cout << str[i];
	if (str[i]==' ') break;}
}
void tach_ten(char str[])//8
{
	char str2[100];
	for(int i=strlen(str)-1, j=0; i > 0; i--, j++)
	{
	str2[j]=str[i];
	if (str[i]==' ') break;}
	for (int i=strlen(str2)-1; i>=0; i--)
	cout << "chuoi ten: "<<str2[i];
}

int main()
{
	char str[100];
	int n;
	cout << "nhap chuoi: "; 
	gets(str);
	do{
	cout << "1. so tu trong chuoi\n";
	cout << "2. so ky tu hoa co trong chuoi\n";
	cout << "3. so ky tu ko phai kt hoa va khong phai kt trong\n";
	cout << "4. chuyen ho sang hoa\n";
	cout << "5. chuyen ten sang hoa\n";
	cout << "6. chuyen kt dau moi tu sang hoa\n";
	cout << "7. tach lay phan ho\n";
	cout << "8. tach lay pan ten\n";
	cout << "0.exit\n";
	cout << "lua chon: "; 
	cin >> n;
	if(strlen(str)==0) cout <<"chuoi rong!";
	else
	switch(n)
	{
	case 1: cout << "so tu trong chuoi la: "<< dem_tu(str);
			break;
	case 2: cout << "so ky tu hoa trong chuoi la: "<<demkt_hoa(str);
			break;
	case 3: cout << "so kt ko phai kt hoa va ko phai ky tu trong: "<<demkt_thuong(str);
			break;
	case 4: cout << "ket qua sau khi chuyen la: "<< chuyen_ho_hoa(str);
			break;
	case 5: cout << "ket qua sau khi chuyen la: "<< chuyen_ten_hoa(str);
			break;
	case 6: cout << "ket qua sau khi chuyen la: "<< chuyen_kt_dau_hoa(str);
			break;
	case 7: tach_ho(str);
			break;
	case 8: tach_ten(str);
			break;
	}
	getch();
	system("cls");
}while(n!=0);
}
