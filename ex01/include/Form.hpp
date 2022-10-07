/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:22:38 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/07 11:25:00 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"


using std::cout;
using std::endl;
using std::string;

class	Bureaucrat;

class Form
{

	public:

		Form();
		Form( Form const & src );
		Form( const string name, bool signedd, const int GTS, const int GTE );
		~Form();

		Form &		operator=( Form const & rhs );

		class	GradeTooHighExeption : public std::exception {

			public:

				virtual const char* what() const throw(){return ("Grade is too high");} 
		};

		class	GradeTooLowExeption : public std::exception {

			public:

				virtual const char* what() const throw(){return ("Grade is too low");} 
		};
		
		const string	getName()	const	;
		bool			getSigned() const	;
		void			setSigned()			;
		int				getGTS() 	const	;
		int				getGTE() 	const	;

		void	beSigned(Bureaucrat & employee);

	private:

		const string	_name;
		bool			_signed;
		const int		_gradetosigne;
		const int		_gradetoexecute;

};

std::ostream &			operator<<( std::ostream & o, Form const & F );
