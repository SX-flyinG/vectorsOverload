//������: ��������� ���� "���������� ������"
//������������� ��� ����� ��� ��������� �� :
//���������
//³�������
//���������(�������� / �������)
//���������(�������� / �������)
//������
//������, ��� �������
//�����
//�����, ��� �������
//���������
//������������
//������ � �������
//
//�Ѳ ��������� ����²����
//
//���̲��� :
//��� �������� �� ��������� �� �������� ����� ��������� �� ������������� ���������

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

	//���������
	Vector operator+(const Vector & other) {
		return Vector(this->x + other.x , this->y + other.y);
	}

	//³�������
	Vector operator-(const Vector& other) {
		return Vector(this->x - other.x, this->y - other.y);
	}

	//���������(�������� / �������)
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

	//���������(�������� / �������)
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

	//������

	bool  operator>(Vector& other) {
		if (this->x > other.x && this->y > other.y) {
			return true;
		}
		return false;
	}

	//������, ��� �������

	bool  operator>=(Vector& other) {
		if (this->x >= other.x && this->y >= other.y) {
			return true;
		}
		return false;
	}

	//�����
	bool  operator<(Vector& other) {
		if (this->x < other.x && this->y < other.y) {
			return true;
		}
		return false;
	}

	//�����, ��� �������
	bool  operator<=(Vector& other) {
		if (this->x <= other.x && this->y <= other.y) {
			return true;
		}
		return false;
	}
	//���������
	bool  operator==(Vector& other) {
		if (this->x == other.x && this->y == other.y) {
			return true;
		}
		return false;
	}

	//������������
	Vector operator=(const Vector& other) {
		return *this;
	}

	//������ � �������
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

	//���������
	Vector obj3;
	obj3 = obj + obj2;
	obj3.PrintCoordinates();

	//³�������
	Vector obj4;
	obj4 = obj3 - obj3;
	obj4.PrintCoordinates();

	//���������(�������� / �������)
	obj = obj++;
	obj.PrintCoordinates();
	obj = ++obj;
	obj.PrintCoordinates();

	//���������(�������� / �������)
	obj = obj--;
	obj.PrintCoordinates();
	obj = --obj;
	obj.PrintCoordinates();

	//������
	if (obj > obj2) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}

	//������, ��� �������
	if (obj3 >= obj4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//�����
	if (obj3 < obj4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//�����, ��� �������
	if (obj <= obj2) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//���������
	if (obj == obj) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}

	//������������
	obj = obj4;
	obj.PrintCoordinates();

	//������ � �������
	cout << obj;
}
