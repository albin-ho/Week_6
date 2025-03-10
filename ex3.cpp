// Program Purpose: ex3, convert cartesian points to polar co-ordinates
// Author:
// Last Modified:10/03/2025
//
//**********************************************************************************
#include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
//  #include <vector>
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
void calc_cart2polar(int x, int y) {
  double PI = 4 * atan(1);
  double radial;
  double theta;
  // using forumala
  // r = sqrt √(((x² + y²)
  //  θ = tan-1 ( y / x )
  radial = sqrt((pow(x, 2) + pow(y, 2)));
  theta = atan(y / x);
  // Convert theta from degree to radian?
  theta = 180.0 * theta / PI;
  cout << fixed << setprecision(2); // Limit output to 2 decimal places
  cout << "The radial is: " << radial << "\n";
  cout << "The theta conversion is:" << theta << " degrees" << endl;
}

int main() {

  Point p1(5, 10); // set points using overload construction
  cout << "The default set points are: " << "x:" << p1.x << " "
       << " y:" << p1.y << endl;
  calc_cart2polar(p1.x, p1.y);

  //  cout << fixed << setprecision(2); // Limit output to 2 decimal places

  // call function
  // calc_hypotenuse(p1.x, p1.y);

  return 0;
}
