//bài 3.14
int main() {
    int n,dem,tong=0;
    do{
       std::cout<<"nhap n : ";
       std::cin>>n;
       if(n>0){
          tong=tong+n;
          dem++;}
    }
while(n!=0);
       std::cout<<"trung binh cong cac so duong la : ";
       std::cout<<(float)tong/dem;
       getch();
}
