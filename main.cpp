#include "Ratio.h"
#include <iostream>
#include <string>

void main()
{
	Ratio r1(2, 3);
	Ratio r2(4, 6);

	std::cout << "r1=" << r1.toString() << "  r2=" << r2.toString() <<"/n" << std::endl;
	std::cout << "r1*r2= " << (r1*r2).toString() << std::endl;
	std::cout << "r1/r2= " << (r1/r2).toString() << std::endl;
	std::cout << "r1=r2 " << (r1=r2).toString() << std::endl;
	std::cout << "r1 == r2? " << (r1==r2) << std::endl;
	std::cout << "~r1  " << (~r1).toString() << std::endl;
	//std::cout << "\nMeow" << std::endl;

	std::cin.get();

};
