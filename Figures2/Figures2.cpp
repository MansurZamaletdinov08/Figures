#include <iostream>

class Figure
{
protected:
	int a, b, c, d;
	int A, B, C, D;
public:
	virtual int return_info() {
		return a, b, c;
	}
};


class Traingle : public Figure
{
protected:
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 70;
public:

	Traingle() {

	}
	int return_info() override {
		return b;
	}
};
 
void print_info(Figure* figure) {
	figure->return_info();
}



int main(int argc, char** argv) {
	setlocale(LC_ALL, "Ru");
	Figure figure;
	figure.return_info();

	Traingle traingle;
	traingle.return_info();

	Figure* par_child = &traingle;
	par_child->return_info();

	print_info(par_child);
}
