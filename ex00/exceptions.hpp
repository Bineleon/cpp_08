#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>

class NotFoundException: public std::exception
{
	public:
	virtual const char* what() const throw()
	{
		return "Element not found";
	}
};

#endif