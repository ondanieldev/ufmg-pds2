#include <iostream>
#include "Class.hpp"

using namespace std;

int main() {

	cout << "Alocando B:" << endl;
	B b1;
	cout << "Alocando C:" << endl;
	C* c1 = new C();
	cout << "Deleting C:" << endl;
	delete c1;
	cout << "Quitting..." << endl;

	return 0;
}