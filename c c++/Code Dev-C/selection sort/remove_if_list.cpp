// list::remove_if
#include <iostream>
#include <list>

// a predicate implemented as a function:
bool single_digit (const int& value) { return (value<5); }

// a predicate implemented as a class:
struct sole {
  bool operator() (const int& value) { return (value%2)==1; }
};
struct sochan {
  bool operator() (const int& value) { return (value%2)==0; }
};

int main ()
{
  int myints[]= {15,36,7,17,20,39,4,1};
  std::list<int> mylist (myints,myints+8);   // 15 36 7 17 20 39 4 1

  //mylist.remove_if (single_digit);           // 15 36 17 20 39

  //mylist.remove_if (sole());               // 36 20 4
  mylist.remove_if (sochan());  // 15 7 17 39 1
  std::cout << "mylist contains:";
  for (std::list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
