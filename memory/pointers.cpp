#include <iostream>

#define SIZE 5

using namespace std;

int main(){
  long value1=200000;
  long value2;
  
  //imprima o valor do objeto apontado por long_ptr
  long *long_ptr = new long;
  long_ptr = &value1;
  cout << *long_ptr << ' ';

  //Imprima o valor de value2
  value2 = *long_ptr;
  cout << value2 << ' ';
  
  //Imprima o endereço de value1
  cout << &value1 << ' ';

  //Imprima o endereço armazenado em long_ptr
  cout << &long_ptr << ' ';

  //Imprima a comparação entre o endereço de value1 com o endereço armazenado em long_ptr
  cout << (&value1 == long_ptr) << ' ';
  
  //imprimir os elementos do array values usando notação de array subscrito.
  unsigned int values[SIZE] = {2, 4, 6, 8, 10};
  unsigned int *v_ptr = new unsigned int;
  for (int i = 0; i < SIZE; ++i) {
    cout << values[i] << ' ';
  }

  //imprimir os elementos do array values usando notação de array ponteiro/deslocamento.
  v_ptr = values;
  v_ptr = &values[0];
  for (int i = 0; i < SIZE; ++i) {
    cout << *(v_ptr + i) << ' ';
  }

  //imprimir os elementos do array values usando notação de array ponteiro/deslocamento com o nome de array como o ponteiro.
  for (int i = 0; i < SIZE; ++i) {
    cout << *(values + i) << ' ';
  }

  //imprimir os elementos do array values utilizando subscritos no ponteiro para o array.
  for (int i = 0; i < SIZE; ++i) {
    cout << v_ptr[i] << ' ';
  }

  //imprimir o quinto elemento de values utilizando a notação de subscrito de array,
  cout << values[4] << ' ';

  //a notação de ponteiro/deslocamento com o nome de array como o ponteiro, 
  cout << *(values + 4) << ' ';

  //a notação de subscrito de ponteiro,
  cout << v_ptr[4] << ' ';
  
  //a notação de ponteiro/deslocamento.
  cout << *(v_ptr + 4) << ' ';
  
  //imprimir a comparação entre o valor armazenado em (v_ptr-4) e values[0]
  cout << (v_ptr + 4) << ' ';
  cout << *(v_ptr + 3) << ' ';
  v_ptr = &values[4];
  cout << (v_ptr - 4) << ' ';
  cout << *(v_ptr - 4);

  return 0;
}