#include <iostream>
#include <boost/bind.hpp>
#include "Function.hpp"

int	function(char c)
{
  std::cout << "salut " << c << std::endl;
  return (42);
}

int main()
{
  Function<int (char)>f = &function;
  f('c');
  return (0);
}
