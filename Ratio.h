#ifndef RATIO_H
#define RATIO_H
#include <string>
class Ratio
{
private:
	int X;
	int Y;

public:
	Ratio(int x_, int y_) :X(x_), Y(y_) {};

	int getX() const { return X; };
	int getY() const { return Y; };
	Ratio operator*( const Ratio& other) const;
	Ratio operator/(const Ratio& other) const;
	Ratio operator~() const;
	Ratio& operator=( const Ratio& other) ;
	bool operator==(const Ratio& other) const;
	bool operator!=(const Ratio& other) const;
	bool operator<(const Ratio& other) const;
	bool operator<=(const Ratio& other) const;
	bool operator>(const Ratio& other) const;
	bool operator>=(const Ratio& other) const;
	std::string toString()const;

	~Ratio()=default;
};

#endif

