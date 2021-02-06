#ifndef PESSOA
#define PESSOA

#include <string>

using namespace std;

class Pessoa {

public:
	string nome;
};

class Estudante : public Pessoa {

public:
	int matricula;
};


class EstGrad : public Estudante {

public:
	string curso;
};

#endif