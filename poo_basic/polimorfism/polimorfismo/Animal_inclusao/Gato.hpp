#ifndef GATO
#define GATO

#include <iostream>
#include "Animal.hpp"

using namespace std;

class Gato : public Animal {

public:

	void fale() override {
		cout << "Miau!" << endl;
	}
};

#endif