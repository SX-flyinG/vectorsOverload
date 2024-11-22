
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

	//Додавання
	Vector operator+(const Vector& other) {
		return Vector(this->x + other.x, this->y + other.y);
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
