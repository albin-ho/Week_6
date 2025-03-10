// Program Purpose: ex2, class with cartesian points
// Author:
// Last Modified:10/03/2025
//
//**********************************************************************************
#include <cmath>
// #include <cstdlib>
#include <iostream>
#include <string>
// #include <vector>
#include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;

class Point { // define a class called point
private:
public:
  int x, y; // create 2 members x, y

  Point() { // default constructor
    x = 5;  // sets default values
    y = 6;
  }

  Point(int x, int y) { // overloaded constructor
    this->x = x;
    this->y = y;
  }
};

// using formulas from https://www.omnicalculator.com/math/hypotenuse
// to calculate length hypotenuse
// c = sqr√(a² + b²)
void calc_hypotenuse(int x, int y) {
  double hyp;
  hyp = sqrt((pow(x, 2) + pow(y, 2)));
  cout << "The Hypotenuse is: " << hyp << endl;
}

int main() {
  Point p1(5, 10); // set points using overload construction
  cout << "The default set points are: " << "x:" << p1.x << " "
       << " y:" << p1.y << endl;
  cout << fixed << setprecision(2); // Limit output to 2 decimal places

  // call function
  calc_hypotenuse(p1.x, p1.y);

  return 0;
}
