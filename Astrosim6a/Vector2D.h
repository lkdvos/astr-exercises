#define _USE_MATH_DEFINES
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

#ifndef VECTOR2D_H
#define VECTOR2D_H
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


Vec operator+(Vec a, Vec b);
Vec operator-(Vec a, Vec b);

//between vector and scalar:
Vec operator*(Vec a, double s);
Vec operator*(double s, Vec a);
Vec operator/(Vec a, double s);
