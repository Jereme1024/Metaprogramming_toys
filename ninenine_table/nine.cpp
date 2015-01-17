#include <iostream>

template <int Base, int N = 1>
struct MultiMe
{
	MultiMe()
	{
		enum R { Res = Base * N };
		std::cout << Base << " * " << N << " = " << Res << "\n";
		MultiMe<Base, N + 1> next;
	}
};

template <int Base>
struct MultiMe<Base, 9>
{
	MultiMe()
	{
		enum R { N = 9, Res = Base * N };
		std::cout << Base << " * " << N << " = " << Res << "\n\n";
	}
};

template <int From, int To>
struct Ninenine
{
	Ninenine()
	{
		MultiMe<From> mm;
		Ninenine<From + 1, To> nn;
	}
};

template <int From>
struct Ninenine<From, From>
{
	Ninenine()
	{
		MultiMe<From> mm;
	}
};

int main()
{
	Ninenine<2, 9> table;

	return 0;
}
