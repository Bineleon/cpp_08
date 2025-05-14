#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	public:
		class SpanIsFullException: public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("Span is already full");
			}
		};
		Span(unsigned int N);
		Span(const Span& src);
		Span& operator=(const Span& rhs);
		~Span(void);
		void addNumber(int & nb);
	
    private:
		Span(void);
		unsigned int _N;
		std::vector<int> _v;
};

# define RESET "\033[0m"
# define SMRED "\033[0;31m"
# define SMGREEN "\033[0;32m"
# define SMYELLOW "\033[0;33m"
# define SMBLUE "\033[0;34m"
# define SMMAGENTA "\033[0;35m"
# define SMCYAN "\033[0;36m"

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"

#endif
