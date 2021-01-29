#ifndef PONTO
#define PONTO

class Ponto {

private:
	class EstruturaPonto {
		public:
			double x;
			double y;
	};
 	EstruturaPonto p;

public:

	Ponto(int x, int y) {
		p.x = x;
		p.y = y;
	}
};

#endif