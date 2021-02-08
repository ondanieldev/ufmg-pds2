#include "Partida.hpp"
#include "Jogador.hpp"

Partida::Partida(int num_jogadores)
{
  this->_num_jogadores = num_jogadores;
  this->_jogadores = new Jogador[num_jogadores];
}

Partida::~Partida()
{
  delete this->_jogadores;
}

void Partida::addJogadorCarta(string nomeJogador, int numero_pontos_carta, string naipe)
{

  Carta carta = Carta(numero_pontos_carta, naipe);

  for (int i = 0; i < this->_num_atual_jogadores; ++i)
  {
    if (_jogadores[i].getNomeJogador() == nomeJogador)
    {
      _jogadores[i].adicionaCarta(carta);
      return;
    }
  }

  Jogador jogador;
  jogador.setNomeJogador(nomeJogador);
  jogador.adicionaCarta(carta);
  _jogadores[this->_num_atual_jogadores] = jogador;
  this->_num_atual_jogadores += 1;
}

int Partida::getNumJogadores()
{
  return this->_num_jogadores;
}

int Partida::getNumAtualJogadores()
{
  return this->_num_atual_jogadores;
}

void Partida::setJogadores(Jogador *jogadores)
{
  this->_jogadores = jogadores;
}

Jogador *Partida::getJogadores()
{
  return this->_jogadores;
}

Jogador Partida::getCampeao()
{
  this->_jogadores = getJogadoresOrdenados();
  return this->_jogadores[this->_num_jogadores - 1];
}

Jogador *Partida::getJogadoresOrdenados()
{
  for (int i = 0; i < this->_num_jogadores - 1; i++)
  {
    for (int j = 0; j < this->_num_jogadores - i - 1; j++)
    {
      if (this->_jogadores[j].calcularPontuacao() > this->_jogadores[j + 1].calcularPontuacao())
      {
        Jogador temp = this->_jogadores[j];
        this->_jogadores[j] = this->_jogadores[j + 1];
        this->_jogadores[j + 1] = temp;
      }
    }
  }
  return this->_jogadores;
}

void Partida::imprimeJogadoresOrdenados()
{
  this->_jogadores = getJogadoresOrdenados();
  for (int i = 0; i < this->_num_jogadores; ++i)
  {
    std::cout << this->_jogadores[i].getNomeJogador() << ' ' << this->_jogadores[i].calcularPontuacao() << std::endl;
  }
}