#include <iostream>
#include <string.h>
#include <cstring>
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
char * bai8(char str[]){
	int count=0;
	strrev(str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' ') break;
		count++;
	}
	for(int i=count-1;i>=0;i--){
		cout<<str[i];
	}	
}
char * bai9(char str[]){
     char c;
     cout<<"| nhap ky tu muon xoa : ";
     cin>>c;
     for(int i=0;str[i]!='\0';i+=1){
         if(str[i]==c){
         for(int j=i;str[j]!='\0';j++){
                 if(str[j+1]=='\0'){
                     str[j]=='\0';
                     break;
                }
             str[j]=str[j]+str[j+1];
             str[j+1]=str[j]-str[j+1];
             str[j]=str[j]-str[j+1];
             }
         break;
         }
    }
    return str;
}
int bai10(char str[]){
	int count=0;
	for(int i=0;str[i]!='\0';i++){
		if(toupper(str[i])=='A'||toupper(str[i])=='I'||toupper(str[i])=='E'||toupper(str[i])=='O'||toupper(str[i])=='U')
		count+=1;
	}
	return count;
}
void bai11(){
	char ho[99],dem[99],ten[99];
	cout<<"| Nhap ho : ";
	fflush(stdin);
	gets(ho);
	cout<<"| Nhap ten dem : ";
	gets(dem);
	cout<<"| Nhap ten : ";
	gets(ten);
	strcat(ho," ");
	strcat(ho,dem);
	strcat(ho," ");
	strcat(ho,ten);
	cout<<"| ho va ten : "<<ho;
}
char * bai12(){


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
	cout<<"| choose exercise 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22 : ";
	cin>>choose;
	while(choose){
		switch(choose){
		case 1:		
		    cout<<"| so ky tu trong chuoi la : ";
		    cout<<bai1(str);
		break;
		case 2:		
		    cout<<"| "<<bai2(str);
		break;
		case 3:		
		    cout<<"| "<<bai3(str);
		break;
		case 4:		
		    cout<<"| "<<bai4(str);
		break;
		case 5:		
		    cout<<"| "<<bai5(str);
		break;
		case 6:		
		    cout<<"| "<<bai6(str);
		break;
		case 7:		
		    cout<<"| ";
			cout<<bai7(str);	
		break;
		case 8:	
			cout<<"| ";	
		    bai8(str);
		break;
		case 9:		
		    cout<<"| "<<bai9(str);
		break;
		case 10:		
		    cout<<"| "<<bai10(str);
		break;
		case 11:		
		    cout<<"| ";
            bai11();
		break;   
		/*case 12:		
		    cout<<"| ";
            bai12(str1,str2,str3);
		break;*/
		}
	break;
	}
cout<<"\n===================END==========================\n";
getch();
}
