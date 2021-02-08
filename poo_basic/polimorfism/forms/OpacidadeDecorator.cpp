#include "OpacidadeDecorator.hpp"

std::string OpacidadeDecorator::desenha()
{
  if (this->_opacidade <= 0 || this->_opacidade > 1)
    return FormaDecorator::desenha();

  std::string opacidade;
  if (this->_opacidade > 0 && this->_opacidade <= 0.33)
    opacidade = "baixa";
  else if (this->_opacidade > 0.33 && this->_opacidade <= 0.66)
    opacidade = "média";
  else if (this->_opacidade > 0.66 && this->_opacidade <= 1)
    opacidade = "alta";

  return FormaDecorator::desenha() + "\n- opacidade: " + opacidade;
}