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

#include "MyVector.h"

ostream& operator<<(ostream& os, const Vector& other) {
	os << "X: " << other.x << "  Y: " << other.y << endl;;
	return os;
}


class Vector3D {
	int x, y, z;
public:
	Vector3D() {
		x = 5;
		y = 7;
		z = 12;
	}
	Vector3D(int x, int y , int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void PrintCoordinates() {
		cout << "X: " << this->x << "  Y: " << this->y << "Z: " << this->z << endl;
	}

	void setX(int x) {
		this->x = x;
	}

	int getX() {
		return this->x;
	}

	void setY(int y) {
		this->y = y;
	}

	int getY() {
		return  this->y;
	}

	void setZ() {
		this->z = z;
	}

	int getZ() {
		return this->z;
	}



	//���������
	Vector3D operator+(const Vector3D& other) {
		return Vector3D(this->x + other.x, this->y + other.y, this->z + other.z);
	}

	//��������� 3d+2d
	//Vector3D operator+(Vector& other) {
	//	return Vector3D(this->x + other.getX(), this->y + other.getY() , this->z);
	//}


	//³�������
	Vector3D operator-(const Vector3D& other) {
		return Vector3D(this->x - other.x, this->y - other.y , this->z - other.z);
	}

	//³������� 3d-2d
	//Vector3D operator+(Vector& other) {
	//	return Vector3D(this->x - other.getX(), this->y - other.getY(), this->z);
	//}

	//���������(�������� / �������)
	Vector3D operator++() {
		++this->x;
		++this->y;
		++this->z;
		return *this;
	}

	Vector3D operator++(int) {
		Vector3D temp = *this;
		++this->x;
		++this->y;
		++this->z;
		return temp;
	}

	//���������(�������� / �������)
	Vector3D operator--() {
		--this->x;
		--this->y;
		--this->z;
		return *this;
	}

	Vector3D operator--(int) {
		Vector3D temp = *this;
		--this->x;
		--this->y;
		--this->z;
		return temp;
	}

	//������

	bool operator>(Vector3D& other) {
		if (this->x > other.x && this->y > other.y && this->z > other.z) {
			return true;
		}
		return false;
	}

	//������ 3d>2d

	//bool  operator>(Vector& other) {
	//	if (this->x > other.getX() && this->y > other.getY()) {
	//		return true;
	//	}
	//	return false;
	//}

	//������, ��� �������

	bool  operator>=(Vector3D& other) {
		if (this->x >= other.x && this->y >= other.y) {
			return true;
		}
		return false;
	}

	//������, ��� ������� 3d >= 2d

	/*bool  operator>(Vector& other) {
		if (this->x >= other.getX() && this->y >= other.getY()) {
			return true;
		}
		return false;
	}*/

	////�����
	bool  operator<(Vector3D& other) {
		if (this->x < other.x && this->y < other.y && this->z < other.z) {
			return true;
		}
		return false;
	}

	//����� 3d < 2d

	//bool operator>(Vector& other) {
	//	if(this->x < other.getX() && this->y <  other.getY()) {
	//		return true;
	//	}
	//	return false;
	//}

	//�����, ��� �������
	bool  operator<=(Vector3D& other) {
		if (this->x <= other.x && this->y <= other.y && this->z <= other.z) {
			return true;
		}
		return false;
	}

	//�����, ��� ������� 3d < 2d

	//bool  operator>(Vector& other) {
	//	if (this->x <= other.getX() && this->y <= other.getY()) {
	//		return true;
	//	}
	//	return false;
	//}


	//���������
	bool operator==(Vector3D& other) {
		if (this->x == other.x && this->y == other.y && this->z == other.z) {
			return true;
		}
		return false;
	}

	//��������� 3d == 2d
	//bool operator==(Vector& other) {
	//	if (this->x == other.getX() && this->y == other.getY()) {
	//		return true;
	//	}
	//	return false;
	//}

	//������������
	Vector3D operator=(const Vector3D& other) {
		return *this;
	}

	//������������
	//Vector3D operator=( Vector& other) {
	//	this->x = other.getX();
	//	this->y = other.getY();
	//	return *this;
	//}

	//������ � �������
	friend ostream& operator<<(ostream& os, const Vector3D& book);
	friend Vector3D operator+(Vector3D& third, Vector& second);
	friend Vector operator+(Vector& second, Vector3D& third);
	friend Vector3D operator-(Vector3D& third, Vector& second);
	friend Vector operator-(Vector& second, Vector3D& third);
	friend bool operator==(Vector& second, Vector3D& third);
	friend bool operator<(Vector& second, Vector3D& third);
	friend bool operator<=(Vector& second, Vector3D& third);
	friend bool operator>(Vector& second, Vector3D& third);
	friend bool operator>=(Vector& second, Vector3D& third);
};

ostream& operator<<(ostream& os, const Vector3D& other) {
	os << "X: " << other.x << "  Y: " << other.y  << "Z: " <<  other.z << endl;;
	return os;
}

Vector3D operator+(Vector3D& third, Vector& second) {
	return Vector3D(third.x + second.getX(), third.y + second.getY(), third.z);
}

Vector operator+(Vector& second, Vector3D& third) {
	return Vector(third.getX() + second.getX(), third.getY() + second.getY());
}

Vector3D operator-(Vector3D& third, Vector& second) {
	return Vector3D(third.x - second.getX(), third.y - second.getY(), third.z);
}

Vector operator-(Vector& second, Vector3D& third) {
	return Vector(third.getX() - second.getX(), third.getY() - second.getY());
}

bool operator==(Vector& second, Vector3D& third) {
	if (second.getX() == third.getX() && second.getY() == third.getY()) {
		return true;
	}
	return false;
}

bool operator<(Vector& second, Vector3D& third) {
	if (second.getX() < third.getX() && second.getY() < third.getY()) {
		return true;
	}
	return false;
}

bool operator<=(Vector& second, Vector3D& third) {
	if (second.getX() < third.getX() && second.getY() < third.getY()) {
		return true;
	}
	return false;
}

bool operator>(Vector& second, Vector3D& third) {
	if (second.getX() < third.getX() && second.getY() < third.getY()) {
		return true;
	}
	return false;
}

bool operator>=(Vector& second, Vector3D& third) {
	if (second.getX() < third.getX() && second.getY() < third.getY()) {
		return true;
	}
	return false;
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
	cout << obj << endl << endl << endl;

	Vector3D object;
	Vector3D object2 = Vector3D(23, 12 , 15);

	//���������
	Vector3D object3;
	object = object + object2;
	object3.PrintCoordinates();

	//³�������
	Vector3D object4;
	object4 = object3 - object3;
	object4.PrintCoordinates();

	//���������(�������� / �������)
	object = object++;
	object.PrintCoordinates();
	object = ++object;
	object.PrintCoordinates();

	//���������(�������� / �������)
	object = object--;
	object.PrintCoordinates();
	object = --object;
	object.PrintCoordinates();

	//������
	if (object > object2) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}

	//������, ��� �������
	if (object3 >= object4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//�����
	if (object3 < object4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//�����, ��� �������
	if (object <= object2) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//���������
	if (object == object) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}

	//������������
	object = object4;
	object.PrintCoordinates();

	//������ � �������
	cout << object << endl << endl << endl;

	obj = obj + object2;
	obj.PrintCoordinates();

	//³�������
	object4 = object3 - obj;
	object4.PrintCoordinates();

	
	//������
	if (obj > object2) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}

	//������, ��� �������
	if (obj3 >= object4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//�����
	if (obj3 < object4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//�����, ��� �������
	if (obj <= object2) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	//���������
	if (obj == object) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
}
