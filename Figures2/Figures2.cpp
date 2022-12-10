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

class Traingle : public Figure {
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

class Rectangular_Traingle : public Traingle {
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

class Isosceles_Traingle : public Traingle {
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

class Equilateral_Traingle : public Traingle {
protected:
	int a = 30, b = 30, c = 30;
	int A = 60, B = 60, C = 60;

public:
	void return_info() override {
		std::cout << "Равносторонний треугольник:" << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
	}
};

class Rectangle : public Figure {
protected:
	int a = 10, b = 20, c = 10, d = 20;
	int A = 90, B = 90, C = 90, D = 90;
public:
	virtual void return_info() {
		std::cout << "Прямоугольник:" << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
	}
};

class Quadrilateral : public Rectangle {
protected:
	int a = 10, b = 20, c = 30, d = 40;
	int A = 50, B = 60, C = 70, D = 80;

public:
	virtual void return_info() {
		std::cout << "Четырёхугольник:" << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
	}
};


class Square : public Rectangle {
protected:
	int a = 20, b = 20, c = 20, d = 20;
	int A = 90, B = 90, C = 90, D = 90;

public:
	void return_info() override {
		std::cout << "Квадрат:" << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
	}
};

class Parallelogram : public Quadrilateral {
protected:
	int a = 20, b = 30, c = 20, d = 30;
	int A = 30, B = 40, C = 30, D = 40;

public:
	void return_info() override {
		std::cout << "Параллелограмм:" << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
	}
};

class Rhomb : public Parallelogram {
protected:
	int a = 30, b = 30, c = 30, d = 30;
	int A = 30, B = 40, C = 30, D = 40;

public:
	void return_info() override {
		std::cout << "Ромб:" << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
	}
};


void print_info(Figure* figure) {
	figure->return_info();
}



int main() {
	setlocale(LC_ALL, "ru");
	Figure figure;
	Traingle traingle;
	Rectangular_Traingle RecTraingle;
	Isosceles_Traingle IsosTraingle;
	Equilateral_Traingle EquiTraingle;
	Rectangle Rec;
	Quadrilateral Quad;
	Square square;
	Parallelogram parallel;
	Rhomb rhomb;


	print_info(&traingle);
	print_info(&RecTraingle);
	print_info(&IsosTraingle);
	print_info(&EquiTraingle);
	print_info(&Quad);
	print_info(&Rec);
	print_info(&square);
	print_info(&parallel);
	print_info(&rhomb);
}
