#ifndef INDICE_H
#define INDICE_H

#include <iostream>
#include <iomanip>
#include <set>
#include <map>

struct Indice {
  std::map<std::string, float> words;
  float total = 0;

  void insert(std::string word);
  void print();
};

#endif