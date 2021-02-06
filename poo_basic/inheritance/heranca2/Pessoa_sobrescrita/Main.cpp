#include <iostream>
#include "Pessoa.hpp"

using namespace std;

int main() {

	Pessoa p;
	p.meuNome();
	Estudante e;
	e.meuNome();
	Pessoa* p2 = new Estudante();
	p2->meuNome();
	delete p2;
	return 0;
}