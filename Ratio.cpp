#include "Ratio.h"
#include <iostream>
#include <string>




Ratio::Ratio(int x_,int y_)
{
	X = x_;
	Y = y_;
}



Ratio& Ratio::operator*(const Ratio& other) 
{
	X = X*(other.X);
	Y = Y*(other.Y);
	return *this;
}

Ratio& Ratio::operator/(const Ratio& other)
{
	X = X*(other.Y);
	Y = Y*(other.X);
	return *this;
}

Ratio& Ratio::operator=( Ratio& other)
{
	if (other == *this)
		return *this;
	else
	{
		X = other.X;
		Y = other.Y;
		return *this;
	}
}

bool Ratio::operator==(const Ratio& other)
{
	if ((X == other.X) || (Y = other.Y))
		return true;
	else
		return false;
}

Ratio& Ratio::operator~()
{
	int r=X;
	X = Y;
	Y = r;
	return *this;

}
std::string Ratio::toString() const
{
	 return(std::to_string(getX()) + '/' + std::to_string(getY()));

}



