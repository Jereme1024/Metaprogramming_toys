#include <iostream>

bool is_prime(int n)
{
	for (int i = 2; (i * i) <= n; i++)
	{
		if (n % i == 0) return false;
	}

	return true;
}

bool is_prime_recusrive(int n, int i = 2)
{
	return (i * i >= n) ? true : (n % i == 0) ? false : is_prime_recusrive(n, i + 1);
}

int main()
{
	std::cout << is_prime_recusrive(18181) << std::endl;

	return 0;
}
