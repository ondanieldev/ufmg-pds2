#include "Estudante.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // number of students 
  int n = 10;
  // students array
  Estudante alunos[10];

  // get students
  for (int i = 0; i < n; ++i) {
    Estudante aluno;
    cin >> aluno.matricula >> aluno.nome;
    for (int j = 0; j < 5; ++ j) {
      cin >> aluno.notas[j];
    }
    alunos[i] = aluno;
  }

  // bubble sort
  for (int i = 1; i < n; ++i) {
    for (int j = n - 1; j >= i; --j) {
      float anteriorRSG = alunos[j-1].calcularRSG();
      float atualRSG = alunos[j].calcularRSG();
      if (
        (anteriorRSG < atualRSG) ||
        (anteriorRSG == atualRSG && alunos[j-1].matricula > alunos[j].matricula)
      ) {
        Estudante aux = alunos[j-1];
        alunos[j-1] = alunos[j];
        alunos[j] = aux;
      } 
    }
  }
  
  // print
  cout << fixed << showpoint; 
  cout << setprecision(2);
  for (int i = 0; i < n; ++i) {
    if (i < 3) {
      cout << alunos[i].matricula << ' ' << alunos[i].nome << ' ' << alunos[i].calcularRSG() << endl;
    }
  }

  return 0;
}