#pragma once
#include <string>
class Ratio
{
private:
	int X;
	int Y;

public:
	Ratio(int, int);
	int getX() const { return X; };
	int getY() const { return Y; };
	Ratio& operator*(const Ratio& other) ;
	Ratio& operator/(const Ratio& other) ;
	Ratio& operator~() ;
	Ratio& operator=( Ratio& other) ;
	bool operator==(const Ratio& other) ;
	std::string toString()const;

	~Ratio()=default;
};

