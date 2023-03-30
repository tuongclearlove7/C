#include <iostream>
using namespace std;

int main ()
{
  int arr[10]={10,20};
  
  for(int i = 0; i < 2; i++){
  		
  		std::cout<<arr[i]<<" ";
  }
  
  int * mypointer;

  mypointer = &arr[0];
  *mypointer = 1;
  
  
  mypointer = &arr[1];
  *mypointer = 2;
  cout << "firstvalue is " << arr[0] << '\n';
  cout << "secondvalue is " << arr[1] << '\n';
  return 0;
}
