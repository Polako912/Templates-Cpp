#include <iostream>

template <class T>
const T& Min(const T& a, const T& b)
{
  return a < b ? a : b;
}

template <class T>
const T& Max(const T& a, const T& b)
{
  return a > b ? a : b;
}

int main ()
{
  int x = 10; 
  int y = 15;
  double z = 100;
  double w = 99;

  int MinInt = Min<int>(x,y);
  double MinDouble = Min<double>(z, w);
  int MaxInt = Max<int>(x, y);
  double MaxDouble = Max<double>(z, w);

  std::cout << "Min int: " << MinInt << std::endl;
  std::cout << "Min double: " << MinDouble << std::endl;
  std::cout << "Max int: " << MaxInt << std::endl;
  std::cout << "Max double: " << MaxDouble << std::endl;

  std::cin.get();

	return 0;
}
