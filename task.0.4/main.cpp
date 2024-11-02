#include <iostream>
#include <cmath>

int main()
{
	float a,b,c;
	std::cin >> a >> b >> c;

	float d = b*b - 4*a*c;
	float x1 = (-b + sqrt(d)) / (2*a);
	float x2 = (-b - sqrt(d)) / (2*a);

	if (d < 0)
		std::cerr << "no roots" << std::endl;

	else
		std::cout << x1 << ' ' << x2 << std::endl;
	int y = 1;
	{ 
		y = 4;
		int y = 2;
		y = 3;
	}
	std::cout << y << std::endl;
}
