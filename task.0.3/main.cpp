#include <iostream>

int main() 
{
	/* 
	 * 000000
	 * 999999
	 * 
	 * */
	int total_happiness = 0;

	for (unsigned int curr_num = 0; curr_num <= 999999; curr_num++)
	{
		char _1 = curr_num % 10;
		int result = curr_num / 10;
		char _2 = result % 10;
		result /= 10;
		char _3 = result % 10;
		result /= 10;
		char _4 = result % 10;
		result /= 10;
		char _5 = result % 10;
		result /= 10;
		char _6 = result % 10;
		
		if (_1 + _2 + _3 == _4 + _5 + _6)
			total_happiness++;
	}

	float chance = (float)total_happiness / 1000000;

	std::cout << total_happiness << std::endl << chance << std::endl;
}

