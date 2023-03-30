// swap vectors
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> thao;   
  std::vector<int> tuong;   
  thao.push_back(16);
  thao.push_back(1);
  thao.push_back(2002);
  tuong.push_back(9);
  tuong.push_back(9);
  tuong.push_back(2003);
  
  thao.swap(tuong);

  std::cout << "thao contains : ";
  for (unsigned i=0; i<thao.size(); i++)
    std::cout << ' ' << thao[i];
  std::cout << '\n';

  std::cout << "tuong contains : ";
  for (unsigned i=0; i<tuong.size(); i++)
    std::cout << ' ' << tuong[i];
  std::cout << '\n';

  return 0;
}
