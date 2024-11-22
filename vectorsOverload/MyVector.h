
class Vector {
	int x, y;
public:
	Vector() {
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
		return this->y;
	}

	//���������
	Vector operator+(const Vector& other) {
		return Vector(this->x + other.x, this->y + other.y);
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
