#ifndef CLASS
#define CLASS

#include <iostream>

using namespace std;

class A {
	
	int _a;

public:

	A(int a) : _a(a) {};
	void getAtributo() { cout << _a << endl; };
};


class B : public A {

	int _b;

public:

	B(int a, int b) : A(a), _b(b) {};
};

#endif