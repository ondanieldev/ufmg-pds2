#ifndef BASE
#define BASE

class Base {

protected:
	int i = 99;
};

class Derived : public Base {

public:
	int f() {
		i++;
		return i;
	}
};

#endif