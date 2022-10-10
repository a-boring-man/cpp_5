/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:24:39 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/10 10:57:17 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "AForm.hpp"

using std::cout;
using std::endl;
using std::string;

class	AForm;

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat( const string name, int grade );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		const string	getName( void ) const;
		int				getGrade( void ) const;

		void	promote( int i );
		void	unpromote( int i );

		class	GradeTooHighExeption : public std::exception {

			public:

				virtual const char* what() const throw(){return ("Grade is too high");} 
		};

		class	GradeTooLowExeption : public std::exception {

			public:

				virtual const char* what() const throw(){return ("Grade is too low");} 
		};
		
		void	signForm( AForm & form ) const;
		void	executeForm( AForm const & form ) const;

	private:

		const string	_name;
		int				_grade;
		
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & B );
