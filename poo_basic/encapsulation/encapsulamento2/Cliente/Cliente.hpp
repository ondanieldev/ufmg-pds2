#ifndef CLIENTE
#define CLIENTE

class Cliente {

private:
	string _nome;
	bool _ativo;

public:

	Cliente(string nome, bool ativo) : _nome(nome), _ativo(ativo) {}

	void setNome(string nome) {
		this->_nome = nome;
	}

	void setAtivo(bool ativo) {
		this->_ativo = ativo;
	}

	string getNome() {
		return this->_nome;
	}

	bool isAtivo() {
		return this->_ativo;
	}
};

#endif