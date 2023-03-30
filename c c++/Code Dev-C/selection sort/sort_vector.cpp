// vector::begin/end
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;
   myvector.push_back(1);
   myvector.push_back(3);
   myvector.push_back(5);
   myvector.push_back(8);
   
   
   

  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
