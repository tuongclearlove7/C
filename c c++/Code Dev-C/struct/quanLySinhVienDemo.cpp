#include<iostream>
#include<cstring>
using namespace std;

struct sv{
	int msv;
	char ht[100];
	float cc, gk, ck, tk;
	
	void in(){
		cout<<"\n ------------------------ Ma sinh vien : "<<msv<<" -------------------------"<<endl;
		cout<<"Ten Sinh vien: "<<ht<<endl;
		cout<<"Diem chuyen can: "<<cc<<endl;
		cout<<"Diem chuyen giua ki: "<<gk<<endl;
		cout<<"Diem chuoi ki: "<<ck<<endl;
		cout<<"Diem tong ket: "<<tk<<endl;
		cout<<"-----------------------------------------";
	}	
};

bool checkTrung(sv *ds, int i){
	for(int j=0;j<i;j++){
		if(ds[i].msv==ds[j].msv){
			cout<<"Ma Sinh Vien da bi trung, nhap lai di: ";
			return false;
		}
	}
	return true;
}
void xuat(sv *ds, int n){
	cout<<"Thong tin danh sach sinh vien : \n";
	for(int i=0;i<n;i++){
		ds[i].in();
	}
}
void deleteFirst(sv *ds, int n){
	for(int i=0;i<n;i++){
		ds[i]=ds[i+1];
	}
	--n;
}

void checkMSV(sv *ds, int n){
	int ma;
	cout<<"Nhap ma sinh vien muon tim kiem: ";
	cin>>ma;
	for(int i=0;i<n;i++){
		if(ds[i].msv==ma){
			cout<<"-------------- co sinh vien tim kiem -------------------"<<endl;
			ds[i].in(); return;
		}
	}
	cout<<"Khong co sinh vien tim kiem !";
	
}


void sapXepTheoDiemTangDan(sv *ds, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (ds[j].tk < ds[minIndex].tk) {
                minIndex = j;
            }
        }

        
        sv temp = ds[minIndex];
        ds[minIndex] = ds[i];
        ds[i] = temp;
    }
    
    
    cout<<"Thong tin danh sach sinh vien sau khi sap xep tang dan theo diem trung binh : \n";
	for(int i=0;i<n;i++){
		ds[i].in();
	}
    
    
}
void nhap(sv *ds, int &n){
	do{
		
	
		cout<<"Nhap so luong sinh vien: ";
		cin>>n;
	
	}while(n<=0);
	for(int i=0;i<n;i++){
		
		// nhap msv
		do{
			cout<<endl<<"Nhap ma sinh vien thu "<<i+1<<" : ";
			cin>>ds[i].msv;
			cout<<endl;
		}while(checkTrung(ds,i)==false);
	
		// nhap ho va ten
		cin.ignore();
		cout<<"Nhap ho va ten: ";
		cin.getline(ds[i].ht,100);
		
		cin.ignore();
		// nhap diem cc, gk, ck
	
		cin>>ds[i].cc>>ds[i].gk>>ds[i].ck;
		
		ds[i].tk=(ds[i].cc+ds[i].gk+ds[i].ck)/3;
		
		cout<<"Nhap diem cc, gk, ck" << ds[i].cc<<ds[i].gk<<ds[i].ck<<endl;
			
	}		
	
}

int main(){
	sv ds[1000];
	int n;
	while(1){
		cout<<"\n---------------MENU-----------------\n";
		cout<<"1. Nhap sinh vien\n";
		cout<<"2. xuat sinh vien\n";
		cout<<"3. xoa sinh vien dau tien\n";
		cout<<"4. tim kiem sinh vien theo ma sinh vien\n";
		cout<<"5. sap xep sinh vien theo diem tang dan\n";
		cout<<"nhap lua chon: ";
		int lc; cin>>lc;
		
		switch(lc){
			case 1:
				nhap(ds,n);
			break;
			case 2:
				xuat(ds,n);
			break;
			case 3:
				deleteFirst(ds,n);
			break;
			case 4:
				checkMSV(ds,n);
			break;
			case 5:
				sapXepTheoDiemTangDan(ds,n);
			break;
			default:
				cout<<" chon 1 tron 5 !\n";
			break;
		
		}
		
	}
	

	return 0;
}

