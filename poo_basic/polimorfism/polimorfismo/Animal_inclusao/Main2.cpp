#include <iostream>
#include "Animal.hpp"
#include "Cachorro.hpp"
#include "Gato.hpp"

using namespace std;

int main() {

	Animal* c = new Cachorro();
	c->fale();
	Animal* g = new Gato();
	g->fale();
	delete c;
	delete g;

	return 0;
}