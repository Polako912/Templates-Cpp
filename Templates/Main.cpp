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

template <class T>
const T& Add(const T& a, const T& b)
{
  return a + b;
}

template <class T>
const T& Sub(const T& a, const T& b)
{
  return a - b;
}

int main ()
{
  int x = 10; 
  int y = 15;
  double z;
  double w = 99;

  std::cin >> z;

  int MinInt = Min<int>(x,y);
  double MinDouble = Min<double>(z, w);
  int MaxInt = Max<int>(x, y);
  double MaxDouble = Max<double>(z, w);
  int sum = Add<int>(x, y);
  double dif = Sub<double>(z, w);

  std::cout << "Min int: " << MinInt << std::endl;
  std::cout << "Min double: " << MinDouble << std::endl;
  std::cout << "Max int: " << MaxInt << std::endl;
  std::cout << "Max double: " << MaxDouble << std::endl;
  std::cout << "Sum: " << sum << std::endl;
  std::cout << "Difference: " << dif << std::endl;

  std::cin.get();
  std::cin.get();

	return 0;
}
