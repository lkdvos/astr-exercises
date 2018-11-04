#define _USE_MATH_DEFINES
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

#ifndef VEC_H
#define VEC_H
#endif

class Vec {
  double _x;
  double _y;

public:
  //constructor
  Vec() { _x=0; _y=0; }
  Vec(double x, double y)
    { _x = x; _y = y; }

  //defining returning functions
  double x() const { return _x; }
  double y() const { return _y; }

  //defining calculations on vector

  double norm() const;

  //defining assignment operators
  Vec& operator+=(Vec v);

  Vec& operator-=(Vec v);

  Vec& operator*=(double s);

  Vec& operator/=(double s);
};
