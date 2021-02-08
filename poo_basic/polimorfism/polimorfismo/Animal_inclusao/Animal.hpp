#ifndef ANIMAL
#define ANIMAL

#include <iostream>

using namespace std;

class Animal {
public:

	virtual void fale() {
		cout << "Fale padrao!" << endl;
	};
};

#endif