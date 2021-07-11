/**
 * Todas as tarefas deste exercicio devem ser feitas sobre esse arquivo.
 * Os metodos e operacoes marcados com a tag "TODO" devem ser editados.
 */

#include <iostream>
#include <vector>
#include "polygon.h"

std::ostream &operator<<(std::ostream &out, const Polygon &poly)
{
  for (const Point &p : poly.limits)
  {
    out << " " << p;
  }
  return out;
}

bool operator==(const Polygon &lhs, const Polygon &rhs)
{
  std::vector<Point> a = lhs;
  int points = 0;
  int containPoints = 0;
  for (const Point &p : a)
  {
    points++;
    if (rhs.contains(p))
    {
      containPoints++;
    }
  }

  std::vector<Point> b = rhs;
  int points2 = 0;
  int containPoints2 = 0;
  for (const Point &p : b)
  {
    points2++;
    if (lhs.contains(p))
    {
      containPoints2++;
    }
  }

  return points == containPoints && points2 == containPoints2;
}

bool Point::contains(const Point &p) const
{
  return p.x == this->x && p.y == this->y;
}

std::ostream &operator<<(std::ostream &out, const Point &p)
{
  out << "(" << p.x << ", " << p.y << ")";
  return out;
}

bool RightRectangle::contains(const Point &p) const
{
  bool xInside = (p.x >= this->limits[0].x && p.x <= this->limits[1].x) ||
                 (p.x >= this->limits[1].x && p.x <= this->limits[0].x);
  bool yInside = (p.y >= this->limits[0].y && p.y <= this->limits[1].y) ||
                 (p.y >= this->limits[1].y && p.y <= this->limits[0].y);
  return xInside && yInside;
}

Point::Point(int xx, int yy) : x(xx), y(yy)
{
  this->limits.push_back(*this);
}

RightRectangle::RightRectangle(int x0, int y0, int x1, int y1)
{
  Point p1 = Point(x0, y0);
  Point p2 = Point(x1, y1);
  this->limits.push_back(p1);
  this->limits.push_back(p2);
}