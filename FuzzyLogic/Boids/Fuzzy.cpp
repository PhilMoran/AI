#include "Fuzzy.h"



Fuzzy::Fuzzy()
{
}


Fuzzy::~Fuzzy()
{
}

void Fuzzy::SizeOf(double size)
{
	double tinySize;
	double smallSize;
	double mediumSize;
	double largeSize;

	if (size >= 0 || size <= 10)
	{
		if (size <= 0)
		{
			tinySize = 1;
		}
		if (size >= 10)
		{
			tinySize = 0;
		}
		if (size > 0 && size < 10)
		{
			tinySize = ((10 - size) / (10 - 0));
			
		}
		std::cout << tinySize << std::endl;
	}
	if (size >= 3 || size <= 20)
	{
		if (size <= 3 || size >=20)
		{
			smallSize = 0;
		}
		if (size >= 10 || size<=15)
		{
			smallSize = 1;
		}
		if (size > 3 && size < 10)
		{
			smallSize = ((size - 3) / (10 - 3));	
		}
		if (size >15 ||size<20)
		{
			smallSize = ((20 - size) / (20 - 15));
		}
		std::cout << smallSize << std::endl;
	}
}
