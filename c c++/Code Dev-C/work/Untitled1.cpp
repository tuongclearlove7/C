#include<iostream>
#include<string.h>
using namespace std;
struct nguoi_yeu{
	bool nguoi_yeu_rat_xinh;
	std::string nguoiyeu;
};
int main(){
nguoi_yeu ny;
ny.nguoi_yeu_rat_xinh = true;
ny.nguoiyeu ="cute phomaique hihi??";
	for(int i = 0;i<100;i++){
		std::cout<<ny.nguoi_yeu_rat_xinh;
		std::cout<<ny.nguoiyeu;
	}
}




