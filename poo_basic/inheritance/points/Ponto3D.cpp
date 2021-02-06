#include "Ponto3D.hpp"

std::string Ponto3D::to_string() const
{
  return "(" + std::to_string(this->_x) + "," + std::to_string(this->_y) + "," + std::to_string(this->_z) + ")";
}

double Ponto3D::distancia(Ponto *p) const
{
  Ponto3D *p3d = dynamic_cast<Ponto3D *>(p);
  double const a = this->_x - p3d->getX();
  double const b = this->_y - p3d->getY();
  double const c = this->_z - p3d->getZ();
  return sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2));
}
