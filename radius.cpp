#include <iostream>
#include <cmath>

int main() {

  int radius;

  std::cout << "Enter the radius of the circle: ";
  std::cin >> radius;

  double diameter = 2 * radius;
  double circumference = 2 * M_PI * radius;
  double area = M_PI * pow(radius, 2);

  std::cout << "Diameter: " << diameter << std::endl;
  std::cout << "Circumference: " << circumference << std::endl;
  std::cout << "Area: " << area << std::endl;

  return 0;
}
