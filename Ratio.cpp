#include "Ratio.h"
#include <iostream>
#include <string>


Ratio Ratio::operator*( const Ratio& other) const
{
	/*Ratio new_ratio(0, 0);
	Ratio &p_nr = new_ratio;
	p_nr.X = getX()*(other.getX());
	p_nr.Y = getY()*(other.getY());*/
	return Ratio(this->getX()*other.getX(), this->getY()*other.getY());
}

Ratio Ratio::operator/(const Ratio& other) const
{
	/*Ratio new_ratio(1, 1);
	new_ratio.X = new_ratio.X*(other.Y);
	new_ratio.Y = new_ratio.Y*(other.X);
	//return new_ratio;*/
	return Ratio(this->getX()*other.getY(), this->getY()*other.getX());
}

Ratio& Ratio::operator=( const Ratio& other)
{
	if (other == *this)
		return *this;
	else
	{
		X = other.getX();
		Y = other.getY();
		return *this;
	}
}

bool Ratio::operator==(const Ratio& other) const
{		
	Ratio r1(getX()*other.getY(), getY()*other.getY());
	Ratio r2(getY()*other.getX(), getY()*other.getY());
	return (r1.getX()==r2.getX());
}

 bool Ratio::operator!=(const Ratio& other) const
{
	 return !((*this) == other);
}

 bool Ratio::operator<(const Ratio& other) const
 {
	 Ratio r1(getX()*other.getY(), getY()*other.getY());
	 Ratio r2(getY()*other.getX(), getY()*other.getY());
	 return (r1.getX()<r2.getX());
 }

 bool Ratio::operator<=(const Ratio& other) const
 {
	 return (((*this) < other) || ((*this) == other));
 }

 bool Ratio::operator>(const Ratio& other) const
 {
	 return !((*this) <= other);
 }

 bool Ratio::operator>=(const Ratio& other) const
 {
	 return (((*this) > other) || ((*this) == other));
 }
 

Ratio Ratio::operator~() const
{
	return Ratio(this->getY(), this->getX());
}


std::string Ratio::toString() const
{
	 return(std::to_string(getX()) + '/' + std::to_string(getY()));

}



