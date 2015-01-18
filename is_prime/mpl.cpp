#include <iostream>
#include <boost/mpl/if.hpp>
#include <boost/mpl/comparison.hpp>
#include <boost/mpl/arithmetic.hpp>
#include <boost/mpl/for_each.hpp>
#include <boost/mpl/range_c.hpp>

namespace mpl = boost::mpl;

template <int N, int I = 2>
struct is_prime
{
	typedef typename mpl::if_<mpl::greater<mpl::times<mpl::int_<I>, mpl::int_<I>>, mpl::int_<N>>, mpl::true_,
		typename mpl::if_<mpl::equal_to<mpl::modulus<mpl::int_<N>, mpl::int_<I>>, mpl::int_<0>>, mpl::false_, is_prime<N, I + 1>>::type
		>::type type;

	enum { value = type::value };
};

struct print
{
	template <class T>
	void operator()(T x)
	{
		if (is_prime<x>::value)
			std::cout << x << " ";
	}
};


int main()
{
	//mpl::for_each<mpl::range_c<int, 1, 100>>( print() );

	volatile bool result = is_prime<18181>::value;

	return 0;
}
