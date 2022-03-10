//
// Created by arnisfet on 10.03.2022.
//

#ifndef EX02_MUTANTSTACK_H
#define EX02_MUTANTSTACK_H


# include <stack>
# include <iostream>
template<typename T>
class MutantStack: public std::stack<T>
		{

		public:

			MutantStack<T>( void ) { return; }
			MutantStack<T>( const MutantStack<T> &src ) { *this = src; }
			~MutantStack<T>( void ) { return; }

			MutantStack<T>	&operator=( const MutantStack<T> &rhs ) {
				(void)rhs;
				return *this;
			}

			typedef typename std::stack<T>::container_type::iterator iterator;

			iterator	begin( void ) { return this->c.begin(); }
			iterator	end( void ) { return this->c.end(); }

			static bool	verbose;

		private:

		};
#endif //EX02_MUTANTSTACK_H
