#ifndef CONTA
#define CONTA

class Conta {

private:
	int _agencia;
	int _numero;
	double _saldo = 0;
	static double constexpr _TARIFA = 0.25;

	void descontarTarifa() {
		this->_saldo -= _TARIFA;
	}

public:

	Conta(int agencia, int numero) : _agencia(agencia), _numero(numero){}

	void setAgencia(int ag) {
		this->_agencia = ag;
	}

	void setNumero(int num) {
		this->_numero = num;
	}

	void setSaldo(double saldo) {
		this->_saldo = saldo;
	}

	int getAgencia() {
		return this->_agencia;
	}

	int getNumero() {
		return this->_numero;
	}

	double getSaldo() {
		return this->_saldo;
	}

	void depositar(double valor) {
		this->_saldo += valor;
		descontarTarifa();
	}

	void sacar(double valor) {
		this->_saldo -= valor;
		descontarTarifa();
	}
};

#endif



