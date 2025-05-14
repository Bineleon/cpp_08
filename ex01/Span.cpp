#include "Span.hpp"

Span::Span(void)
{
    // std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int N): _N(N)
{
    // std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const Span& src)
{
    // std::cout << "Span copy constructor called" << std::endl;
    *this = src;
}

Span& Span::operator=(const Span& rhs)
{
    // std::cout << "Span copy assignment operator called" << std::endl;
    _v = rhs._v;
	_N = rhs._N;
    return *this;
}

Span::~Span(void)
{
    // std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(int & nb)
{
	if (_v.size() < _N )
		_v.push_back(nb);
	else
		throw SpanIsFullException();
}