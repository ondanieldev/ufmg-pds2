#ifndef PESSOA
#define PESSOA

#include <iostream>

using namespace std;

class Pessoa {

public:

	virtual void meuNome() {
		cout << "Meu nome é PESSOA." << endl;
	}
};

class Estudante : public Pessoa {

public:

	void meuNome() override {
		cout << "Meu nome é ESTUDANTE." << endl;
	}
};

#endif