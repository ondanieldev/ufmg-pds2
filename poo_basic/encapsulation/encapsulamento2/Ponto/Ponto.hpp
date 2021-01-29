#ifndef PONTO
#define PONTO

class Ponto {

private:
	double _x;
	double _y;

public:

	Ponto(double x, double y) : _x(x), _y(y) {}

	void setX(double x) {
		this->_x = x;
	}

	void setY(double y) {
		this->_y = y;
	}

	double getX() {
		return this->_x;
	}

	double getY() {
		return this->_y;
	}
};

#endif