#ifndef SIZE
#define SIZE 5
#endif 

#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include <string>

using namespace std;

struct Estudante {
  string nome;
  int matricula;
  float notas[SIZE];

  float calcularRSG();
};

#endif