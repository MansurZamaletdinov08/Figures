#include <iostream>


class Figure {
protected:
	int a, b, c, d;
	int A, B, C, D;
};

class Traingle : public Figure {
protected:
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 70;
public:
	Traingle() {
		std::cout << "Треугольник: " << "\n" << "Строноны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C;
	}
};


int main() {
	setlocale(LC_ALL, "Ru");
	Traingle traingle;
	//traingle.get_a();
}

/*
#include <iostream>


class Figure {
	
};

class Traingle : public Figure {
protected:
	int a = 10;
	int b = 20;
	int c = 30;

	int A = 50;
	int B = 60;
	int C = 70;
public:
	int get_info() {
		return a;
	}
	//void get_traingle() {
	//	std::cout << "Треугольник:" << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c;
	//}
};


int print_info(Figure* figure) {
	std::cout << a;
}



int main() {
	setlocale(LC_ALL, "Ru");
	Traingle traingle;
	//std::cout << traingle.return_info();
	//traingle.get_traingle();
}
*/