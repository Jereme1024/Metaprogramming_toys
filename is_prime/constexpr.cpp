#include <iostream>

// Could be called with both static and dynamic way
constexpr bool is_prime(size_t n, size_t i = 2)
{
	return (n <= 1) ? true : (i * i > n) ? true : (n % i == 0) ? false : is_prime(n, i + 1);
}

int main()
{
	static_assert(is_prime(18181), "This number is NOT a prime!");

	volatile bool result = is_prime(18181);

	//std::cout << is_prime(18181) << std::endl;

	return 0;
}
