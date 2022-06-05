#include <iostream>
#include <string.h>
#include <cstring>
#include <conio.h>
#include <iomanip>
#include<algorithm>

#include <fstream> 
#include<process.h>
using namespace std;

int Count_Char_Upper(char s[]) {
 int i=0;
 int count = 0;
        while (s[i]!='\0') {
            if (s[i]>='A'&&s[i]<='Z') 
				count++;
                i++;
    }      
	return count;
}
sort(int arr[],int n){
	
	}
void input(int arr[], long int n){
	cout<<"ban nhap muon bao  so nguyen : ";
	cin>>n;
    for(long int i = 0; i < n; i++) {
    	cout<<"nhap so nguyen : ";
        cin>>arr[i];
        if(arr[i]==0){
    		cout<<"stop program!!!\n";
    		break;
		}
	}
}
soft_num_infile(){
	int tg;
    int change;
    ofstream sort_file; 
	int n; 
	int arr[10000];
    sort_file.open("songuyen.txt");
    cout<<"ban nhap muon bao  so nguyen : ";
	cin>>n;
	for(int i = 0; i < n; i++){
		cout<<"nhap so nguyen : ";
        cin>>arr[i];
        if(arr[i]==0){
    		cout<<"stop program!!!\n";
    		break;
		}
    }
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
        	if(arr[i] > arr[j]){
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;        
            }
        }
    }
    for(int i = 0; i < n; i++){
		sort_file << arr[i] <<" ";
    	cout<< arr[i] <<" ";
    }
    sort_file.close(); 
}
handle(int arr[], long int n){
	int tg;
	FILE *file1, *file2;
	char data[100]; 
    int i=0;
    //int j;
    char a;
	int count=0;
	ofstream outfile; 
	ofstream outfile_soduong;
	ofstream outfile_soam;
	ifstream infile; 
    outfile.open("baitho.txt");  
    cout << "Nhap cau tho cua ban : "; 
    cin.getline(data, 1000000);
	input(arr,n);
    outfile << "====================Menu====================" << endl; 
    outfile <<"| "<< data << endl; 
	outfile<<"| Bai tho co "<<Count_Char_Upper(data)<<" ky tu hoa";
	outfile << "\n====================END=====================" << endl; 	
    outfile.close(); 
    outfile.open("songuyen.txt");
   
    for (int i = 0; i < 1000; i++) {
    	  if(arr[i]==0){
    		break;
			}
		outfile << arr[i] <<" ";
        }
    outfile.close(); 
    
    cout << "Doc du lieu co trong file!\n"; 
    cout <<"ky tu trong file : "<< data << endl; 
    infile.close();
	cout<<"Bai tho co "<<Count_Char_Upper(data)<<" ky tu hoa\n";	 
   
   file1 = fopen("baitho.txt", "r");
   if (file1 == NULL) {
      fclose(file1);
   }
   file2 = fopen("baitho2.txt", "w");
   if (file2 == NULL) {
      fclose(file1);
   }
   do {
      a = fgetc(file1);
      fputc(a, file2);
    } while (a != EOF);
    outfile.open("DL.txt");
    for ( int i = 0; i < 1000; i++) {
			if(arr[i]==0){
	    		break;
			}
	outfile << arr[i] <<" ";
	}
	while(arr[i]!='\0'){
		if(arr[i]<0){
				outfile_soam.open("soam.txt");
				outfile_soam << arr[i] <<" ";
				outfile_soam.close();
			}
			else if(arr[i]>0){
				outfile_soduong.open("soduong.txt");
				outfile_soduong << arr[i] <<" ";
				outfile_soduong.close();
			}
    	i++;
	}
	outfile <<"\n"<< i;
	outfile.close();
}

int main() {
	int choose=-1;
	ofstream sort_file; 
	int n; 
	int arr[10000];
	cout << "====================Menu====================" << endl;
	//handle(arr,n);
	cout << setw(15) << right <<""<<"Bai tap ve file\n";
	cout<<"1 : bai 1, bai 2, bai 3, bai 4, bai 5, bai 6, bai 8, bai 10.\n2 : bai 7\n";
	cout << setw(10) << right <<""<<"Options!!! [keywords] : 1, 2 \n";
	cout << setw(15) << right <<""<<"choose program : ";
	cin>>choose;
	cin.ignore(256,'\n');
	while(choose) {
			switch(choose){
			case 1:		
    			handle(arr,n);
			break;
			case 2:
			soft_num_infile();
    		break;
			}
		break;
	}
	cout << "\n====================END=====================" << endl;
}






