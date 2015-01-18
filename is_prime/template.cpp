#include <iostream>

struct TRUE
{
	enum { value = true };
};

struct FALSE
{
	enum { value = false };
};


template <bool condition, class T, class F>
struct IF
{
	typedef T type;
};

template <class T, class F>
struct IF<false, T, F>
{
	typedef F type;
};

template <size_t N, size_t I = 2>
struct IS_PRIME
{
	typedef typename IF<(I * I > N), TRUE, typename IF<(N % I == 0), FALSE, IS_PRIME<N, I + 1>>::type>::type type;

	enum { value = type::value };
};

int main()
{
	typedef IS_PRIME<18181> is_prime;
	volatile bool result = is_prime::value;

	//std::cout << is_prime::value << "\n";

	return 0;
}
