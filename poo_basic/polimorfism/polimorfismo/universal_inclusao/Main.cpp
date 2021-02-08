#include <list>

using namespace std;

int main() {

	list<Animal*> lista;
	for(int i=0; i<5;i++) {
		if (i % 2 == 0)
			lista.push_back(new Cachorro());
		else
 			lista.push_back(new Gato());
	}

	for (auto a : lista)
		a->fale();

	return 0;
}