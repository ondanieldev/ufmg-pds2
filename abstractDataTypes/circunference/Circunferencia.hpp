#ifndef PI
#define PI 3.14
#endif

#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

#include <cmath>

struct Circunferencia {
  float xc;
  float yc;
  float raio;

  Circunferencia(float xc, float yc, float raio);
  float calcularArea();
  bool possuiIntersecao(Circunferencia* c);
};

#endif