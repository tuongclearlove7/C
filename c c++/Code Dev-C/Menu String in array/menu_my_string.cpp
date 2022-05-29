#include <iostream>
#include <string.h>
#include <cstring>
#include <conio.h>
#include <iomanip>
#include<algorithm>

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

char * bai9(char my_str[]) {
      int i, j;
      char c;
      int n = strlen(my_str);
      cout<<"| ex 9 input character clear : ";
      cin>>c;
	  for(i=0; i<n; i++) {
	     if(my_str[i] == c) {
		    for(j=i; j<n; j++){
		        my_str[j]= my_str[j+1];
		   		my_str[n]='\0';
		 		i--;
			}
        }
    }
	return my_str;         
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
	char surname[100],mname[100],name[100];
	cout<<"| ex 11 input surname : ";
	fflush(stdin);
	cin>>surname;
	cout<<"| ex 11 input middle name : ";
	cin>>mname;
	cout<<"| ex 11 input name : ";
	cin>>name;
	strcat(surname," ");
	strcat(surname,mname);
	strcat(surname," ");
	strcat(surname,name);
	cout<<"| ex 11 output : "<<surname;
}

char * bai12() {
	char str1[100];
	cout<<"| ex 12 input string 1 : ";
	cin>>str1;
	char str2[100];
	cout<<"| ex 12 input string 2 : ";
	cin>>str2;
	char str3[100];
	cout<<"| ex 12 input string 3 : ";
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
	cout<<"| ex 15 input string 1 : ";
	std::cin>>str2;
	strcpy(str1, str2);
	cout<<"| ex 15 string1 = string2 : "<<str1<<"\n";
	cout<<"| ex 15 input string 2 : ";
	std::cin>>str1;
	strcpy(str2, str1);
	cout<<"| ex 15 string2 = string1 : "<<str2;

}
	
char * bai16(char str[]) {
	char passoword[100]="Le Thi Hoa Cuc";
	
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
	int index, index2, k;
    k = strlen(str);
    for (index = 0; index < k; index++)  
    	for (index2 = index + 1; index2 < k; index2++) {
          if (str[index] == str[index2])
	          strncpy(str + index2, str + index2 + 1, k - index2);
	           k = strlen(str);
    }
    return str;
}

char * bai21(char str[]) {
   int index,index2,k,l=0;
   char string[300];
   for(index=0;index<strlen(str);index++) {
      k=0;
   	  for(index2=0;index2<=l;index2++)
         if(str[index]==string[index2])
         k++;
         if (k==0){
         	k=1;
         for(index2=index+1;index2<strlen(str);index2++)
            if (str[index]==str[index2])
	            k++;
	            cout<<str[index]<<":"<<k<<"\t";
      }
      string[l]=str[index];
      l++;
   }
}

char * bai22(char str[]) {
   int count = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; 
    str[count] = '\0';
    return str;
}

void handle(){
	char str[100];
	char my_str[100];
	int choose=-1;
	cout << setw(5) << left << "======================";		
	cout << setw(3) << right <<"MENU";
	cout << setw(5) << right << "======================" << endl;
	cout << setw(1) << left <<"|";
	cout << setw(15) << right <<""<<"String exercises\n";
	cout << "|\n|"<<setw(9) << right<<"" <<" Input string : ";
	gets(str);
	cout << "|"<<setw(4) << right<<""<<" Input string you want clear : ";
	gets(my_str);
	cout <<"|\n|" <<setw(7) << right <<""<<"Options [keyword : 1, 17, 19, 20]\n|";
	cout <<setw(9) << right<<""<<" please! choose keywords : ";
	cin>>choose;
	while(choose) {
		switch(choose){
		case 1:		
		    cout<<"|\n| ex 1 output : ";
		    cout<<bai1(str)<<"\n";
			cout<<"| ex 2 output : "<<bai2(str)<<"\n";
		    cout<<"| ex 3 output : "<<bai3(str)<<"\n";		
			cout<<"| ex 4 output : "<<bai4(str)<<"\n";
			cout<<"| ex 5 output : "<<bai5(str)<<"\n";
		    cout<<"| ex 6 output : "<<bai6(str)<<"\n";
		    cout<<"| ex 7 output : ";
			bai7(str);	
			cout<<"\n";
			cout<<"| ex 8 output : ";	
		    bai8(str);	
		    cout<<"\n";	
		    cout<<"| ex 10 output : "<<bai10(str);
		    cout<<"\n";	
		    cout<<"| ex 9 output : "<<bai9(my_str);	
		    cout<<"\n";	
            bai11();   		
            cout<<"\n";	
            cout<<"| ex 12 output : "<<bai12();
			cout<<"\n";	
            cout<<"| ex 13 output : "<<bai13()<<"\n";
            cout<<"| ex 14 output : "<<bai14(str);
            cout<<"\n";
            bai15();
			cout<<"\n";	
            cout<<"| ex 16 output : ";
			bai16(str);
		break;
			case 17://tran tuong
			cout<<"| ex 17 output : ";
			bai17(my_str);
            cout<<"\n";
			cout<<"| ex 18 output : ";
			bai18(my_str);
			cout<<"\n";
			cout<<"| ex 22 output : "<<bai22(str);
			break;
		case 19://tran tuong
			cout<<"| ex 19 output : ";
			bai19(str);
			cout<<"\n";
			cout<<"| ex 21 output : ";
			bai21(str);
		break;
		case 20://duy tan
			cout<<"| ex 20 output : "<<bai20(str)<<"\n";
			break;
		}
		cout<<"\n===================END==========================\n";
	break;
	}	
}
int main(){
	int i = 0;
	int loop;
	cout<<"Please!!! Input the number of program iterations : ";
	cin>>loop;
	if(loop==0){
		cout<<"ban da nhap sai";
	}
	else{
		cout<<"Press enter to continue";
		while(i<loop){
			getch();
			system("cls");
			cin.ignore(256, '\n');
			handle();
			i++;
	}
}
getch();
}
