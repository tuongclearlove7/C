#include <iostream>
#include <string.h>
#include <conio.h>
#include <iomanip>

using namespace std;
int bai1(char str[])
{
	int count=0;
	for(int i=0; i < strlen(str); i++)
	if(str[i]==' ')count++;
	return count+1;
}
int bai2(char str[])
{
	int count=0;
	for(int i=0; i < strlen(str); i++)
	if(isupper(str[i])!=0)count++;
	return count;
}
int bai3(char str[])
{
	int count=0;
	for(int i=0; i < strlen(str); i++)
	if(islower(str[i])!=0)count++;
	return count;
}
char * bai4(char str[])
{
	strlwr(str);
	for(int i=0; i < strlen(str) && str[i]!=' '; i++)
	 str[i]= toupper(str[i]);
	 return str;
}
char * bai5(char str[])
{
	strlwr(str);
	for(int i=strlen(str)-1; i > 0 && str[i]!=' '; i--)
	 str[i]= toupper(str[i]);
	 return str;}
char * bai6(char str[])
	{
	strlwr(str);
	str[0]=toupper(str[0]);
	for(int i=0; i < strlen(str); i++)
	if (str[i]==' ') str[i+1]=toupper(str[i+1]);
	return str;
}
char * bai7(char str[])
{
	for(int i=0; i < strlen(str); i++){
	cout << str[i];
	if (str[i]==' ') 
		break;
	}
}
char * bai8(char str[])
{
	char str2[100];
	for(int i=strlen(str)-1, j=0; i > 0; i--, j++)
	{
	str2[j]=str[i];
	if (str[i]==' ') break;}
	for (int i=strlen(str2)-2; i>=0; i--)
	cout <<str2[i];
}
int main(){
	char str[100];
	int choose = -1;
	cout << setw(5) << left << "======================";		
	cout << setw(3) << right <<"MENU";
	cout << setw(5) << right << "======================" << endl;
	cout << setw(1) << left <<"|";
	cout << setw(15) << right <<""<<"String exercises\n";
	cout << setw(5) << right <<"| Input string : ";
	gets(str);
	cout<<"| choose exercise 1,2,3,4,5,6,7,8,9,10 : ";
	cin>>choose;
	while(choose){
		switch(choose){
		case 1:		
		    cout<<"| so ky tu trong chuoi la : ";
		    cout<<bai1(str);
		break;
		case 2:		
		    cout<<"| output : "<<bai2(str);
		break;
		case 3:		
		    cout<<"| output : "<<bai3(str);
		break;
		case 4:		
		    cout<<"| output : "<<bai4(str);
		break;
		case 5:		
		    cout<<"| output : "<<bai5(str);
		break;
		case 6:		
		    cout<<"| output : "<<bai6(str);
		break;
		case 7:		
		    cout<<"| output : ";
			cout<<bai7(str);	
		break;
		case 8:	
			cout<<"| output : ";	
		    bai8(str);
		break;
		}
	break;
	}
cout<<"\n===================END==========================\n";
}
