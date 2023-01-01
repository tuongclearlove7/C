#include <stdio.h>

int main()
{
 int n;
 int k;
 do {
  printf("Nhap vao so nguyen :");
  scanf("%d",&n);
  scanf("%d",&k);
      }
  while ((n < 0||n > 30) && (k < 0||k > 30) );   
    printf("Nhap dung! Ban vua nhap n = %d",n);
    printf("Nhap dung! Ban vua nhap k = %d",k);
}














