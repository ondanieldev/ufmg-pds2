#define _USE_MATH_DEFINES
#include "Ponto2D.hpp"

std::string Ponto2D::to_string() const
{
  return "(" + std::to_string(this->_x) + "," + std::to_string(this->_y) + ")";
}

double Ponto2D::distancia(Ponto *p) const
{
  Ponto2D *p2d = dynamic_cast<Ponto2D *>(p);
  double const a = this->_x - p2d->getX();
  double const b = this->_y - p2d->getY();
  return sqrt(pow(a, 2) + pow(b, 2));
  return 0;
}

void Ponto2D::converteParaPolar()
{
  double const r = sqrt(pow(this->_x, 2) + pow(this->_y, 2));
  double const theta = atan(this->_y / this->_x);
  this->_x = r;
  this->_y = theta;
}