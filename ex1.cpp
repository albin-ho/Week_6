// Program Purpose:No purpose yet
// Author:
// Last Modified:06/03/2025
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
#include <string>
// #include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;

class Vector {
private:
public:
  double x = 100;
  double y = 200;
  ;

  Vector() {} // Default vector constructor

  Vector(double x, double y) {
    this->x = x;
    this->y = y;
  }
};

int main() {
  Vector vector;
  cout << "The default data for the class is: " << "x:" << vector.x << " "
       << " y:" << vector.y << endl;
  Vector vector1(0, 0);
  cout << "The changed data for the class is: " << "x:" << vector1.x << " "
       << " y:" << vector1.y << endl;

  return 0;
}
