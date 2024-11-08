/*-----------------Happy number------------------*/
#include <iostream>

int main() 
{
	unsigned long int rest;
	int letters[20];
	int count;
	int r_sum;
	int l_sum;

	std::cin >> rest;
	
	//splitting into numbers
	for (int i = 0; rest != 0; i++)
	{
		count = i + 1;
		
		letters[i] = rest % 10;
		rest = rest / 10;
/*
		std::cout 
			<< "letter: " <<letters[i] << std::endl
			<< "the rest: " << rest << std::endl
			<< "count: " << count << std::endl << std::endl;
*/
};

	//calculating right sum
	for (int i = 0; i != count/2;i++)
		r_sum += letters[i];

	//calculating left sum
	if (count % 2 == 0)
	{
		for (int i = count/2; i != count + 1; i++)
			l_sum += letters[i];
	}
	else
	{
		for (int i = count/2 + 1; i != count + 1; i++)
			l_sum += letters[i];
	};

	std::cout << (r_sum == l_sum ? "A happy number" : "Not a happy number") << std::endl;
}
