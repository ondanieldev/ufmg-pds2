#ifndef CACHORRO
#define CACHORRO

#include <iostream>
#include "Animal.hpp"

using namespace std;

class Cachorro : public Animal {

public:
	void fale() override {
		cout << "Au! Au!" << endl;
	}
};

#endif