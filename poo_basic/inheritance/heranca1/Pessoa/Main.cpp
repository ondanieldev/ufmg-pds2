#include <iostream>
#include "Pessoa.hpp"

using namespace std;

int main() {

	EstGrad* aluno = new EstGrad();
	aluno->nome = "Joao";
	aluno->matricula = 2019123456;
	aluno->curso = "Computacao";
	return 0;
}