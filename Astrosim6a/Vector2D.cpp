#define _USE_MATH_DEFINES
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

//include header
#include "Vector2D.h"


double Vec::norm() const { return sqrt(_x*_x + _y*_y); }

Vec& Vec::operator+=(Vec v) {
  _x += v._x;
  _y += v._y;
  return *this;
}

Vec& Vec::operator-=(Vec v) {
  _x -= v._x;
  _y -= v._y;
  return *this;
}

Vec& Vec::operator*=(double s) {
  _x *= s;
  _y *= s;
  return *this;
}

Vec& Vec::operator/=(double s) {
  _x /= s;
  _y /= s;
  return *this;
}


//defining binary operators on Vec

//between two vectors:
Vec operator+(Vec a, Vec b) { return a += b;}
Vec operator-(Vec a, Vec b) { return a -= b;}

//between vector and scalar:
Vec operator*(Vec a, double s) { return a *= s; }
Vec operator*(double s, Vec a) { return a *= s; }
Vec operator/(Vec a, double s) { return a /= s; }

int main() {
  Vec a(3, 4);
  Vec b(1, -1);
  cout << a.x() << b.x() << endl;
  b = a + b;
  cout << b.x() << ' ' << b.y() << endl;



  return 0;
}
