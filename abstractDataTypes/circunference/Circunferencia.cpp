#include "Circunferencia.hpp"

#include<iostream>

using namespace std;

Circunferencia::Circunferencia(float xc, float yc, float raio) {
  this->xc = xc;
  this->yc = yc;
  this->raio = raio;
}

float Circunferencia::calcularArea() {
  return PI * pow(this->raio, 2);
}

bool Circunferencia::possuiIntersecao(Circunferencia* c) {
  float dx = pow((this->xc - c->xc), 2);
  float dy = pow((this->yc - c->yc), 2);
  float distancia = sqrt(dx + dy);
  float distancia_max = this->raio + c->raio;
  return (distancia <= distancia_max);
}