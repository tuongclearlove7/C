#include<stdio.h>

int main() {
	int even;
	int odd;
   scanf("%d", &even);
   scanf("%d", &odd);
   
   if (even % 2 == 0) {
      printf("%d la so chan\n", even);
   } else {
      printf("%d la so le\n", even);
   }
   if (odd % 2 != 0 ) {
      printf("%d la so le\n", odd);
   } else {
      printf("%d la so chan\n", odd);
   }
   return 0;
}























