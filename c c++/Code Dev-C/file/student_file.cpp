#include <iostream>
#include <string.h>
#include <cstring>
#include <conio.h>
#include <iomanip>
#include<algorithm>
#include <fstream> 
#include<process.h>


struct Student{
	char name[100];
	float hoa;
	float ly;
	float toan;
	float tb;
	int masv;
};

Student handle_student(Student arr[],int n){
	
	std::cout << "====================Menu====================" << std::endl;
	
	std::ofstream fstudent; 
	fstudent.open("Sinhvien.txt"); 
	
	std::ofstream fstudent2; 
	fstudent2.open("Sinhvien2.txt"); 
	
	int j;
	int key[100] = {1,2,3,4,5,6};
	
	std::cout<<"| nhap so sinh vien : ";
	std::cin>>n;
	
		for(int i=1;i<=n;i++) {
			
			std::cout<<"| nhap ten : ";
			std::cin>>arr[i].name;
			std::cout<<"| vui long nhap ma sinh vien : ";
			std::cin>>arr[i].masv; 
			
			if(arr[i].masv == -1){
				
				std::cout<<"cho den khi nhap -1 = break program";
				
				exit(0);
			}
			
			do {
				
			if(arr[i].masv!=key[0] && arr[i].masv!=key[1] && arr[i].masv!=key[2] && arr[i].masv!=key[3]){
				
				std::cout<<"| Ma sinh vien nay k ton tai vui long nhap lai!!! : ";
				std::cin>>arr[i].masv;
				}
		    }
			
			while(arr[i].masv!=key[0] && arr[i].masv!=key[1] && arr[i].masv!=key[2] && arr[i].masv!=key[3]); 
			
		    	std::cout<<"| chuc mung ban da nhap dung ma sinh vien bam enter de tiep tuc\n";	
			   	std::cin.ignore(256, '\n');
			   	std::cout<<"| ";
			   	std::cin.ignore(256, '\n');
		   		std::cout<<"| nhap  toan : ";
				std::cin>>arr[i].toan;
				std::cout<<"| nhap diem hoa : ";
				std::cin>>arr[i].hoa;
				std::cout<<"| nhap diem ly : ";
				std::cin>>arr[i].ly;
	}
	
	std::cout<<"| nhap so hoc sinh can xem : ";
	std::cin>>n;
	
	for(int i=1;i<=n;i++){

		
		arr[i].tb=(float) (arr[i].toan + arr[i].ly + arr[i].hoa)/3;
		
		fstudent<<"\n_________________________________________________________\n";
		fstudent<<"| "<<i<<". sinh vien "<<strupr(arr[i].name);
		fstudent<<"\n| ma sinh vien cua sinh vien "<<arr[i].name<<" la : "<<arr[i].masv;
		fstudent<<"\n| diem toan cua "<<arr[i].name<<" la : "<<arr[i].toan;
		fstudent<<"\n| diem hoa cua "<<arr[i].name<<" la : "<<arr[i].hoa;
		fstudent<<"\n| diem ly cua "<<arr[i].name<<" la : "<<arr[i].ly;
		fstudent<<"\n| diem trung binh cua sinh vien "<<arr[i].name<<" la : "<<arr[i].tb<<"\n";
		
		if(arr[i].tb>=5){
			
			fstudent2<<"\n_________________________________________________________\n";
			fstudent2<<"| "<<i<<". sinh vien "<<strupr(arr[i].name);
			fstudent2<<"\n| ma sinh vien cua sinh vien "<<arr[i].name<<" la : "<<arr[i].masv;
			fstudent2<<"\n| diem toan cua "<<arr[i].name<<" la : "<<arr[i].toan;
			fstudent2<<"\n| diem hoa cua "<<arr[i].name<<" la : "<<arr[i].hoa;
			fstudent2<<"\n| diem ly cua "<<arr[i].name<<" la : "<<arr[i].ly;
			fstudent2<<"\n| diem trung binh cua sinh vien "<<arr[i].name<<" la : "<<arr[i].tb<<"\n";
			
		}
		
		std::cout<<"\n_________________________________________________________\n";
		
	
		std::cout<<"| "<<i<<". sinh vien "<<strupr(arr[i].name);
		std::cout<<"\n| ma sinh vien cua sinh vien "<<arr[i].name<<" la : "<<arr[i].masv;
		std::cout<<"\n| diem toan cua "<<arr[i].name<<" la : "<<arr[i].toan;
		std::cout<<"\n| diem hoa cua "<<arr[i].name<<" la : "<<arr[i].hoa;
		std::cout<<"\n| diem ly cua "<<arr[i].name<<" la : "<<arr[i].ly;
		std::cout<<"\n| diem trung binh cua sinh vien "<<arr[i].name<<" la : "<<arr[i].tb<<"\n";
		
	}
	
	fstudent.close();
	fstudent2.close();
}

int main() {

	Student arr[100];
	int n;
	handle_student(arr,n);

}


