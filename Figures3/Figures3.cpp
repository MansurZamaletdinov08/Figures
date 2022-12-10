#include <iostream>

class Figure {
protected:
	int a, b, c, d;
	int A, B, C, D;
	int F = 0;

public:
	virtual bool check() {
		if(F == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	virtual void print_info() {
		std::cout << "Фигура: " << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << F << "\n\n";
	}
};

class Traingle : public Figure {
protected:
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 70;
	int F = 3;

public:
	bool check() override {
		if (F == 3 || (a + b + c) == 180) {
			return true;
		}
	}

	void print_info() override {
		std::cout << "Треугольник:" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << F << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
	}
};

class Rectangular_Traingle : public Traingle {
protected:
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 90;
	int F = 3;
public:
	bool check() override {
		if ((A + B) == 90) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << "Прямоугольный Треугольник:" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << F << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
	}
};

class Rectangular_Traingle2 : public Traingle {
protected:
	int a = 10, b = 20, c = 30;
	int A = 50, B = 40, C = 90;
	int F = 3;
public:
	bool check() override {
		if ((A + B) == 90) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << "Прямоугольный Треугольник:" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << F << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
	}
};


class Isosceles_Traingle : public Traingle {
protected:
	int a = 10, b = 20, c = 10;
	int A = 50, B = 60, C = 50;
	int F = 3;

public:
	bool check() override {
		if ((a == c) && (A == C) && (A + B + C == 180)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << "Равнобедренный треугольник:" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << F << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
	}
};

class Equilateral_Traingle : public Traingle {
protected:
	int a = 30, b = 30, c = 30;
	int A = 60, B = 60, C = 60;
	int F = 3;

public:
	bool check() override {
		if ((a == b && c) && (A && B && C == 60)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << "Равносторонний треугольник:" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << F << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
	}
};

class Quadrilateral : public Figure {
protected:
	int a = 10, b = 20, c = 30, d = 40;
	int A = 50, B = 60, C = 70, D = 80;
	int F = 4;

public:
	bool check() override {
		if (F == 4 && (A + B + C + D) == 360) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << "Четырёхугольник:" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << F << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
	}
};

class Rectangle : public Quadrilateral {
protected:
	int a = 10, b = 20, c = 10, d = 20;
	int A = 90, B = 90, C = 90, D = 90;
	int F = 4;

public:
	bool check() override {
		if ((a == c && b == d) && (A && B && C && D == 90)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << "Прямоугольник:" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << F << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
	}
};

class Square : public Quadrilateral {
protected:
	int a = 20, b = 20, c = 20, d = 20;
	int A = 90, B = 90, C = 90, D = 90;
	int F = 4;

public:
	bool check() override {
		if ((a && b == c && d) && (A && B && C && D == 90)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << "Квадрат:" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << F << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
	}
};

class Parallelogram : public Quadrilateral {
protected:
	int a = 20, b = 30, c = 20, d = 30;
	int A = 30, B = 40, C = 30, D = 40;

public:
	bool check() override {
		if ((a == b && c == d) && (A == B && C == D)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << "Параллелограмм:" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << F << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
	}
};

class Rhomb : public Quadrilateral {
protected:
	int a = 30, b = 30, c = 30, d = 30;
	int A = 30, B = 40, C = 30, D = 40;

public:
	bool check() override {
		if ((a == b == c == d) && (A == B && C == D)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << "Ромб:" << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << F << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
	}
};


void print_info(Figure* figure) {
	figure->print_info();
}

int main() {
	setlocale(LC_ALL, "Ru");
	Figure figure;
	Traingle traingle;
	Rectangular_Traingle ReacTrain;
	Rectangular_Traingle2 ReacTrain2;
	Equilateral_Traingle EquTrain;
	Isosceles_Traingle IsosTrain;
	Quadrilateral Quad;
	Rectangle rectan;
	Square square;
	Parallelogram paral;
	Rhomb rhomb;

	print_info(&figure);
	print_info(&traingle);
	print_info(&ReacTrain);
	print_info(&ReacTrain2);
	print_info(&IsosTrain);
	print_info(&EquTrain);
	print_info(&Quad);
	print_info(&rectan);
	print_info(&square);
	print_info(&paral);
	print_info(&rhomb);
}