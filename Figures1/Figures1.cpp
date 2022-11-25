#include <iostream>

class Figure {
protected:
	int sides_count = 0;
	std::string name = "Фигура: ";
public:
	void get_sides_count() {
		std::cout << "Количество сторон: " << std::endl << name << sides_count << std::endl;
	}

	
};

class Traingle : public Figure {
public:
	Traingle() {
		sides_count = 3;
		name = "Треугольник: ";
		std::cout << name << sides_count << std::endl;
	}
};

class Quadrangle : public Figure {
public:
	Quadrangle() {
		sides_count = 4;
		name = "Четырёхугольник: ";
		std::cout << name << sides_count;
	}
};


int main() {
	setlocale(LC_ALL, "Ru");

	Figure figure;
	figure.get_sides_count();

	Traingle traingle;
	Quadrangle quadrangle;


}

















/*
#include <iostream>

class Figure {
protected:
	int sides_count;
	std::string name;

public:
	int get_sides_count(int a) {
		std::cout << "Количество сторон: " << a;
	}

	std::string get_name(std::string name1) {
		std::cout << "Название Фигуры: " << name1;
	}
};

class Triangle : public Figure {
	Triangle(int a) {

	}
};

class Quadrangle : public Figure {
	Quadrangle(int a) {

	}
};
*/