//Задача: Розробити клас "Тривимірний вектор"
//Перевантажити для нього такі оператори як :
//Додавання
//Віднімання
//Інкримент(постфікс / префікс)
//Декримент(постфікс / префікс)
//Більше
//Більше, або дорівнює
//Менше
//Менше, або дорівнює
//Порівняння
//Присвоювання
//Виводу в консоль
//
//ВСІ ОПЕРАТОРИ ПЕРЕВІРИТИ
//
//ПРИМІТКА :
//Такі операції як додавання та віднімання мають працювати за математичними правилами

#include <iostream>

using namespace std;

class Vector {
	int x, y;
public : 
	Vector(){
		x = 5;
		y = 5;
	}
	Vector(int x, int y) {
		this->x = x;
		this->y = y;
	}

	void PrintCoordinates() {
		cout << "X: " << this->x << "  Y: " << this->y << endl;
	}

	//Додавання
	Vector operator+(const Vector & other) {
		return Vector(this->x + other.x , this->y + other.y);
	}

	//Віднімання
	Vector operator-(const Vector& other) {
		return Vector(this->x - other.x, this->y - other.y);
	}

	//Інкримент(постфікс / префікс)
	Vector operator++() {
		++this->x;
		++this->y;
		return *this;
	}

	Vector operator++(int) {
		Vector temp = *this;
		++this->x;
		++this->y;
		return temp;
	}

	//Декримент(постфікс / префікс)
	Vector operator--() {
		--this->x;
		--this->y;
		return *this;
	}

	Vector operator--(int) {
		Vector temp = *this;
		--this->x;
		--this->y;
		return temp;
	}

	//Більше

	bool  operator>(Vector& other) {
		if (this->x > other.x && this->y > other.y) {
			return true;
		}
		return false;
	}

	//Більше, або дорівнює

	bool  operator>=(Vector& other) {
		if (this->x >= other.x && this->y >= other.y) {
			return true;
		}
		return false;
	}

	//Менше
	bool  operator<(Vector& other) {
		if (this->x < other.x && this->y < other.y) {
			return true;
		}
		return false;
	}

	//Менше, або дорівнює
	bool  operator<=(Vector& other) {
		if (this->x <= other.x && this->y <= other.y) {
			return true;
		}
		return false;
	}
	//Порівняння
	bool  operator==(Vector& other) {
		if (this->x == other.x && this->y == other.y) {
			return true;
		}
		return false;
	}

	//Присвоювання
	Vector operator=(const Vector& other) {
		return *this;
	}

	//Виводу в консоль
	friend ostream& operator<<(ostream& os, const Vector& book);
};

ostream& operator<<(ostream& os, const Vector& other) {
	os  << "X: " << other.x << "  Y: " << other.y << endl;;
	return os;
}

int main()
{
	Vector obj;
	Vector obj2 = Vector(23, 12);

	//Додавання
	Vector obj3;
	obj3 = obj + obj2;
	obj3.PrintCoordinates();

	//Віднімання
	Vector obj4;
	obj4 = obj3 - obj3;
	obj4.PrintCoordinates();

	//Інкримент(постфікс / префікс)
	obj = obj++;
	obj.PrintCoordinates();
	obj = ++obj;
	obj.PrintCoordinates();

	//Декримент(постфікс / префікс)
	obj = obj--;
	obj.PrintCoordinates();
	obj = --obj;
	obj.PrintCoordinates();

	//Більше
	if (obj > obj2) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}

	//Більше, або дорівнює
	if (obj3 >= obj4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//Менше
	if (obj3 < obj4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//Менше, або дорівнює
	if (obj <= obj2) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//Порівняння
	if (obj == obj) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}

	//Присвоювання
	obj = obj4;
	obj.PrintCoordinates();

	//Виводу в консоль
	cout << obj;
}
