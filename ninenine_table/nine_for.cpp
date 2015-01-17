#include <iostream>

int main()
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << " * " << j << " = " << (i * j) << "\n";
		}
		std::cout << "\n";
	}

	return 0;
}
