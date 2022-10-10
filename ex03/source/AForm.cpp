/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:23:09 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/07 14:12:56 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm() : _name("random AFormular"), _signed(0), _gradetosigne(1), _gradetoexecute(1) {

	cout << "DEFAULT AFormular constructor called" << endl;
	return;
}

AForm::AForm( const AForm & src ) : _name(src.getName()), _signed(src.getSigned()), _gradetosigne(src.getGTS()), _gradetoexecute(src.getGTE()) {

	cout << "COPY AFormular constructor called" << endl;
	return;
}

AForm::AForm( const string name, bool signedd, const int GTS, const int GTE ) : _name(name), _signed(signedd), _gradetosigne(GTS), _gradetoexecute(GTE) {

	if (GTS > 150 || GTE > 150)
		throw GradeTooLowExeption();
	if (GTS < 1 || GTE < 1)
		throw GradeTooHighExeption();
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm() {

	cout << "AForm destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
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

std::ostream &			operator<<( std::ostream & o, AForm const & F )
{
	o << "Name : " << F.getName() << endl << "Signed status : " << F.getSigned() << endl << "Grade to signed : " << F.getGTS() << endl << "Grade to execute : " << F.getGTE() << endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AForm::beSigned(Bureaucrat & employee) {

	if (employee.getGrade() > this->getGTS())
	{
		cout << employee.getName() << " coulnd't sign : " << this->_name << " because he/she is too low Graded" << endl;
		throw GradeTooLowExeption();
	}
	employee.signForm(*this);
	return;
}

void	AForm::CheckExecuteCondition( Bureaucrat const & executor ) const {

	if (!this->getSigned())
		throw FormNotSigned();
	if (executor.getGrade() > this->getGTE())
		throw GradeTooLowExeption();
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const string	AForm::getName( void ) const {

	return (this->_name);
}

bool			AForm::getSigned( void ) const {

	return (this->_signed);
}

int		AForm::getGTS( void ) const {

	return (this->_gradetosigne);
}

int		AForm::getGTE( void ) const {

	return (this->_gradetoexecute);
}

void	AForm::setSigned( int i ) {

	this->_signed = i;
	return;
}

/* ************************************************************************** */