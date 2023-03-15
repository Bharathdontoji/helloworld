#include <iostream>

int main() {

  double celsius;

  std::cout << "Enter degrees in Celsius: ";
  std::cin >> celsius;

  double fahrenheit = (celsius * 9.0/5.0) + 32.0;

  std::cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << std::endl;

  return 0;
}
