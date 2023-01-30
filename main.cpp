#include <iostream>

using namespace std;

int main() {
  float width, length, perimeter, area;

  cout << "Please Enter the Width of a Rectangle  =  ";
  cin >> width;

  cout << "Please Enter the Length of a Rectangle =  ";
  cin >> length;

  perimeter = 2 * (length + width);
  area = length * width;

  cout << "Perimeter of a Rectangle =  " << perimeter;
  cout << "Area of the rectangle = " << area;

  return 0;
}

