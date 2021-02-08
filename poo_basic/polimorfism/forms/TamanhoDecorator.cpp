#include "TamanhoDecorator.hpp"

std::string TamanhoDecorator::desenha()
{
  return FormaDecorator::desenha() + "\n- tamanho: " + std::to_string(this->_tamanho);
}