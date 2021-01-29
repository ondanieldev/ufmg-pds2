#include <iostream>
#include "Base.hpp"

using namespace std;

int main() {

	Base b;
	cout << b.i << endl;
	Derived d;
	cout << d.f() << endl;
	return 0;
}