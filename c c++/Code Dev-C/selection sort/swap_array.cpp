#include <iostream>     // std::cout
#include <utility>      // std::swap

int main () {

  int x=10, y=20;                  // x:10 y:20
  std::swap(x,y);                  // x:20 y:10

  int mai[4];
  int thao[] = {16,1,2002};                     // foo: ?  ?  ?  ?
  int tuong[] = {9,9,2003};       // foo: ?  ?  ?  ?    bar: 10 20 30 40
  //std::swap(foo,bar);              // foo: 10 20 30 40   bar: ?  ?  ?  ?
  std::swap(thao,tuong);

  std::cout << "tuong contains : ";
  for(int i = 0; i < 3; i++){
  	
  	  std::cout<<tuong[i]<<" ";
  }
   	
  std::cout << '\n';

  return 0;
}
