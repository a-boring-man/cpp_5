/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:23:09 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/07 14:12:56 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("random formular"), _signed(0), _gradetosigne(1), _gradetoexecute(1) {

	cout << "DEFAULT Formular constructor called" << endl;
	return;
}

Form::Form( const Form & src ) : _name(src.getName()), _signed(src.getSigned()), _gradetosigne(src.getGTS()), _gradetoexecute(src.getGTE()) {

	cout << "COPY Formular constructor called" << endl;
	return;
}

Form::Form( const string name, bool signedd, const int GTS, const int GTE ) : _name(name), _signed(signedd), _gradetosigne(GTS), _gradetoexecute(GTE) {

	if (GTS > 150 || GTE > 150)
		throw GradeTooLowExeption();
	if (GTS < 1 || GTE < 1)
		throw GradeTooHighExeption();
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form() {

	cout << "Form destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		string*	tmps;
		tmps = (string*)&this->_name;
		*tmps = rhs.getName();
		this->_signed = rhs.getSigned();
		int*	tmpi;
		tmpi = (int*)&this->_gradetosigne;
		*tmpi = rhs.getGTS();
		tmpi = (int*)&this->_gradetoexecute;
		*tmpi = rhs.getGTE();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & F )
{
	o << "Name : " << F.getName() << endl << "Signed status : " << F.getSigned() << endl << "Grade to signed : " << F.getGTS() << endl << "Grade to execute : " << F.getGTE() << endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::beSigned(Bureaucrat & employee) {

	if (employee.getGrade() > this->getGTS())
	{
		cout << employee.getName() << " coulnd't sign : " << this->_name << " because he/she is too low Graded" << endl;
		throw GradeTooLowExeption();
	}
	employee.signForm(*this);
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const string	Form::getName( void ) const {

	return (this->_name);
}

bool			Form::getSigned( void ) const {

	return (this->_signed);
}

int		Form::getGTS( void ) const {

	return (this->_gradetosigne);
}

int		Form::getGTE( void ) const {

	return (this->_gradetoexecute);
}

void	Form::setSigned( int i ) {

	this->_signed = i;
	return;
}

/* ************************************************************************** */