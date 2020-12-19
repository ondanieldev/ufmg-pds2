#include "Indice.hpp"

void Indice::insert(std::string word) {
  this->words[word] += 1;
  this->total += 1;
}

void Indice::print() {
  for (auto it = this->words.begin(); it != this->words.end(); ++it) {
    if (it->first.size() >= 3) {
      float percentual = it->second / this->total;
      std::cout << std::setprecision(0) << it->first << ' ' << it->second << ' ';
      std::cout << std::fixed << std::setprecision(2) << percentual << std::endl;  
    }
  }
}