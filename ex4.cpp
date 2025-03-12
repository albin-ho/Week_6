// Program Purpose:Ex4, classes
// Author:
// Last Modified:
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
// #include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;
class Shape {
private:
  double length;
  double width;
  double height;

public:
  // get functions
  double get_length() { return length; }
  double get_width() { return width; }
  double get_height() { return height; }
  // set functions
  void set_length(double length) { this->length = length; }
  void set_width(double width) { this->width = width; }
  void set_height(double height) { this->height = height; }
  Shape() {} // default constructor

  Shape(double length, double width, double height) {
    this->length = length;
    this->width = width;
    this->height = height;
  }

  ~Shape() { cout << "destructor" << endl; } // default destructor
};

void calc_area(Shape shape) {
  double area;
  area = shape.get_length() * shape.get_width();
  cout << "The area is: " << area << "cm2" << endl;
}

int main() {
  cout << "This program outputs a shape!" << endl;

  return 0;
}
