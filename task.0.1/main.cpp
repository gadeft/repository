#include <iostream>

int main() 
{
	int a,b;
	std::cin >> a >> b;
	/*
	 *****
	 *****
	 *****
	 *****
	 */
	for (char j = 1; j <= b; j = j + 1)
	{
		for (char i = 1; i <= a; i = i + 1) 
			std::cout << '*';
		std::cout << std::endl;
	}
	for (char i = 1; i <= 10; i = i + 1, std::cout << '#');
	std::cout << std::endl;
	for (char i = 1; i <= a*b;i++)std::cout << ( i%a != 0 ? "*" : "*\n" );
	std::cout << ("#","*","5","6") << std::endl;
}
