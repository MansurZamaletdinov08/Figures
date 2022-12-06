#include <iostream>

class Figure {
protected:
	int a, b, c, d;
	int A, B, C, D;

public:
	virtual void return_info() {
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C;
	}
};

class Traingle : Figure {
protected:
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 70;

public:
	void return_info() override {
		std::cout << "Треугольник:" << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
	}
};

class Rectangular_Traingle : Traingle {
protected:
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 90;

public:
	void return_info() override {
		std::cout << "Прямоугольный Треугольник:" << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
	}
};

class Isosceles_Traingle : Traingle {
protected:
	int a = 10, b = 20, c = 10;
	int A = 50, B = 60, C = 50;

public:
	void return_info() override {
		std::cout << "Равнобедренный Треугольник:" << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	Figure figure;
	Traingle traingle;
	Rectangular_Traingle RecTraingle;
	Isosceles_Traingle IsosTraingle;
	//figure.return_info(10, 20);
	traingle.return_info();
	RecTraingle.return_info();
	IsosTraingle.return_info();
}
