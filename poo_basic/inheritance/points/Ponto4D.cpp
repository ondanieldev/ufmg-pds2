#include "Ponto4D.hpp"

std::string Ponto4D::to_string() const
{
  return "(" + std::to_string(this->_x) + "," + std::to_string(this->_y) + "," + std::to_string(this->_z) + "," + std::to_string(this->_w) + ")";
}

double Ponto4D::distancia(Ponto *p) const
{
  Ponto4D *p4d = dynamic_cast<Ponto4D *>(p);
  double const a = this->_x - p4d->getX();
  double const b = this->_y - p4d->getY();
  double const c = this->_z - p4d->getZ();
  double const d = this->_w - p4d->getW();
  return sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2));
}
