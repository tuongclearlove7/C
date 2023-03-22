#include <array>
#include <iostream>
 
int main()
{
  std::array array{ 1, 2, 3 };
 
  // Ask our array for the begin and end points (via the begin and end member functions).
  auto begin{ array.begin() };
  auto end{ array.end() };
 
  for (auto p{ begin }; p != end; ++p) // ++ to move to next element.
  {
    std::cout << *p << ' '; // Indirection to get value of current element.
  }
  std::cout << '\n';
 
  return 0;
}
