#include <iostream>
#include <string.h>
#include <cstring>
#include <conio.h>
#include <iomanip>

using namespace std;
int bai1(char str[]) {
	int count=0;
	for(int i=0; i < strlen(str); i++)
		if(str[i]==' ')
			count++;
	return count+1;
}

int bai2(char str[]) {
	int count=0;
	for(int i=0; i < strlen(str); i++)
		if(isupper(str[i])!=0)
			count++;
	return count;
}

int bai3(char str[]) {
	int count=0;
	for(int i=0; i < strlen(str); i++)
		if(islower(str[i])!=0)
			count++;
	return count;
}

char * bai4(char str[]) {
	strlwr(str);
	for(int i=0; i < strlen(str) && str[i]!=' '; i++)
	 	str[i] = toupper(str[i]);
	return str;
}

char * bai5(char str[]) {
	strlwr(str);
	for(int i = strlen(str)-1; i > 0 && str[i]!=' '; i--)
	   str[i] = toupper(str[i]);
	return str;
}

char * bai6(char str[]) {
	strlwr(str);
	str[0]=toupper(str[0]);
	for(int i=0; i < strlen(str); i++)
		if (str[i]==' ') 
			str[i+1]=toupper(str[i+1]);
	return str;
}

char * bai7(char str[]) { 
	for(int i=0; i < strlen(str); i++){
			cout<<str[i];
		if (str[i]==' ') 
			return str;
	}
}

char * bai8(char str[]){
	int count=0;
	strrev(str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' ') 
			break;
			count++;
	}
	for(int i=count-1;i>=0;i--){
		cout<<str[i];
	}	
}

char * bai9(char str[]) {
      int i, j;
      char c;
      int n = strlen(str);
      cout<<"| input character in string clear : ";
      cin>>c;
	  for(i=0; i<n; i++) {
	     if(str[i] == c) {
		    for(j=i; j<n; j++){
		        str[j]= str[j+1];
		   		str[n]='\0';
		 		i--;
			}
        }
    }
	return str;         
}

int bai10(char str[]){
	int count=0;
	for(int i=0;str[i]!='\0';i++){
		if(toupper(str[i])=='A'||toupper(str[i])=='I'||toupper(str[i])=='E'||toupper(str[i])=='O'||toupper(str[i])=='U'){
				count+=1;
		}
	}
	return count;
}
void bai11(){
	char surname[10000000000],mname[4525235],name[3525235325];
	cout<<"| input surname : ";
	fflush(stdin);
	gets(surname);
	cout<<"| input middle name : ";
	gets(mname);
	cout<<"| input name : ";
	gets(name);
	strcat(surname," ");
	strcat(surname,mname);
	strcat(surname," ");
	strcat(surname,name);
	cout<<"| output : "<<surname;
}

char * bai12() {
	char str1[100];
	cout<<"| input string 1 : ";
	cin>>str1;
	char str2[100];
	cout<<"| input string 2 : ";
	cin>>str2;
	char str3[100];
	cout<<"| input string 3 : ";
	cin>>str3;
	return strcmp(str1,str2)<0?(strcmp(str1,str3)<0?str1:str3):(strcmp(str2,str3)<0?str2:str3);
}

char * bai13() {
   char str1[15];
   char str2[15];
   int ret;
   strcpy(str1, "abcbefghk");
   strcpy(str2, "Abcdefghk");
   ret = strcmp(str1, str2);
   if(ret > 0) {
      return str2;
   }
}

char * bai14(char str[]) {
   char k;
   for (int i = 0; i < strlen(str); i++) {
      for (int j = i; j < strlen(str); j++) {
         if (toupper(str[i]) > toupper(str[j])) {
            k = str[i];
            str[i] = str[j];
            str[j] = k;
         }
      }
   }
   return str;
}

char * bai15() {
	char str1[100];
	char str2[100];
	cout<<"| input string 1 : ";
	std::cin>>str2;
	strcpy(str1, str2);
	cout<<"| string1 = string2 : "<<str1<<"\n";
	cout<<"| input string 2 : ";
	std::cin>>str1;
	strcpy(str2, str1);
	cout<<"| string2 = string1 : "<<str2;

}
	
char * bai16(char str[]) {
	char name[100]="Le Thi Hoa Cuc";
	
}

char * bai17(char str[]) {
	for(int i=1; i < strlen(str); i+=1){
	   cout << str[i];
	}
}

char * bai18(char str[]) {
	int count=0;
	strrev(str);
	for(int i=0;str[i]!='\0';i++){
		count+=1;
	}
	for(int i=count-2;i>=0;i--){
		cout<<str[i+1];
	}
}

char * bai19(char str[]) {
	int count=0;
	strrev(str);
	for(int i=4;str[i]!='\0';i++){
		count+=1;
	}
	for(int i=count-2;i>=0;i--) {
		cout<<str[i+1];
	}
}

char * bai20(char str[]) {
	int i, j, k;
    k = strlen(str);
    for (i = 0; i < k; i++)  
    	for (j = i + 1; j < k; j++) {
          if (str[i] == str[j])
          strncpy(str + j, str + j + 1, k - j);
           k = strlen(str);
    }
    return str;
}

char * bai21(char str[]) {
   int i,j,k,l=0;
   char string[300];
   
   for(i=0;i<strlen(str);i++) {
      k=0;
   	  for(j=0;j<=l;j++)
         if(str[i]==string[j])
         k++;
         if (k==0){
         	k=1;
         for(j=i+1;j<strlen(str);j++)
            if (str[i]==str[j])
	            k++;
	           cout<<str[i]<<":"<<k<<"\t";
      }
      string[l]=str[i];
      l++;
   }
}

char * bai22(char str[]) {
int n = strlen(str); 
for(int i=0;i<n;i++)
	 if(str[i]==32) {
		for(int j=i;j<n;j++) {
			 str[j]=str[j+1];
			 i-=1;
 		}
	}
	return str;
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
		    cout<<"| output : ";
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
			bai7(str);	
		break;
		case 8:	
			cout<<"| output : ";	
		    bai8(str);
		break;
		case 9:		
		    cout<<"| output : "<<bai9(str);
		break;
		case 10:		
		    cout<<"| output : "<<bai10(str);
		break;
		case 11:		
            bai11();
		break;   
		case 12:		
            cout<<"| output : "<<bai12();
		break;
		case 13:		
            cout<<"| output : "<<bai13();
		break;
		case 14:		
            cout<<"| output : "<<bai14(str);
		break;
		case 15:		
            bai15();
		break;
		case 16:		
            cout<<"| output : ";
			bai16(str);
		break;
		case 17:
			cout<<"| output : ";	
            bai17(str);
		break;
		case 18:
			cout<<"| output : ";
			bai18(str);
		break;
		case 19:
			cout<<"| output : ";
			bai19(str);
		break;
		case 20:
			cout<<"| output : "<<bai20(str);
		break;
		case 21:
			cout<<"| output : ";
			bai21(str);
		break;
		case 22:
			cout<<"| output : "<<bai22(str);
		break;
		}
	break;
}
cout<<"\n===================END==========================\n";
getch();
}
