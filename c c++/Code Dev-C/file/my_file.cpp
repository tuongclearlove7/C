#include <iostream> 
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

handle(int arr[], long int n){
	
	FILE *file1, *file2;
	char data[100]; 
    int i=0;
    int j=100000000000;
    char a;
	int count=0;
	ofstream outfile; 
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
		outfile << arr[i] <<" , ";
	}
    outfile.close(); 
    cout << "Doc du lieu co trong file!\n"; 
    cout <<"ky tu trong file : "<< data << endl; 
    infile.close();
	cout<<"Bai tho co "<<Count_Char_Upper(data)<<" ky tu hoa";	 
   
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
}

int main() {
	int choose=-1;
	int n; 
	int arr[10000];
	cout << "====================Menu====================" << endl;
//	cout<<"choose program : ";
	//cin>>choose;
//	cin.ignore(256,'\n');
//	while(choose) {
	//		switch(choose){
	//		case 1:		
			    handle(arr,n);
		//	break;
		//	}
	//	break;
//	}
	cout << "\n====================END=====================" << endl;
}






