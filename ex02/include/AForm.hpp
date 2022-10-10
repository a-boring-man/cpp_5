/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:22:38 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/07 14:12:45 by jrinna           ###   ########lyon.fr   */
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

class AForm
{

	public:

		AForm();
		AForm( AForm const & src );
		AForm( const string name, bool signedd, const int GTS, const int GTE );
		virtual ~AForm();

		AForm &		operator=( AForm const & rhs );

		class	GradeTooHighExeption : public std::exception {

			public:

				virtual const char* what() const throw(){return ("Grade is too high");} 
		};

		class	GradeTooLowExeption : public std::exception {

			public:

				virtual const char* what() const throw(){return ("Grade is too low");} 
		};

		class	FormNotSigned : public std::exception {

			public:

				virtual const char* what() const throw(){return ("the Form wasn't signed");} 
		};
		
		const string	getName()	const	;
		bool			getSigned() const	;
		void			setSigned( int i )	;
		int				getGTS() 	const	;
		int				getGTE() 	const	;

		void			beSigned( Bureaucrat & employee );
		void			CheckExecuteCondition( Bureaucrat const & executor ) const;
		virtual void	execute( Bureaucrat const & executor ) const = 0;

	private:

		const string	_name;
		bool			_signed;
		const int		_gradetosigne;
		const int		_gradetoexecute;

};

std::ostream &			operator<<( std::ostream & o, AForm const & F );
