/*
* Escreva um programa que leia um texto fornecido e imprima, em ordem
* alfabética, todas palavras com 3 ou mais caracteres, com uma contagem do
* número de vezes que ocorreu na entrada e o percentual (2 casas de precisão)
* que essa palavra representa de **todo** o texto (mesmo palavras com menos de 3
* caracteres). 
*/

#include "Indice.hpp"

int main() {
  Indice indice;
  std::string word;

  while (std::cin >> word) {
    indice.insert(word);
  }

  indice.print();

  return 0;
}