/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:24:42 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/07 14:13:13 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Paul Auchon"), _grade(150) {

	cout << "DEFAULT Bureaucrat constructor called" << endl;
	return;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _grade(src.getGrade()) {

	string*	tmp;
	tmp = (string*)&this->_name;
	*tmp = src.getName();
	cout << "COPY Bureaucrat constructor called" << endl;
	return;
}

Bureaucrat::Bureaucrat( const string name, int grade ) : _name(name) {

	if (grade < 1)
		throw Bureaucrat::GradeTooHighExeption();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowExeption();
	cout << "NAMED Bureaucrat constructor called" << endl;
	this->_grade = grade;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() {

	cout << this->getName() << " has been fired" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		string*	tmp;
		tmp = (string*)&this->_name;
		*tmp = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & B )
{
	o << B.getName() << ", bureaucrat grade " << B.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::promote( int i ) {

	if (this->_grade - i < 1)
		throw Bureaucrat::GradeTooHighExeption();
	this->_grade -= i;
	cout << this->getName() << " has been promoted, his/her grade is now : " << this->getGrade() << endl;
	return;
}

void	Bureaucrat::unpromote( int i ) {

	if (this->_grade + i > 150)
		throw Bureaucrat::GradeTooLowExeption();
	this->_grade += i;
	cout << this->getName() << " has been unpromoted, his/her grade is now : " << this->getGrade() << endl;
	return;
}

void	Bureaucrat::signForm( Form & form ) const {

	cout << this->getName() << " sign : " << form.getName() << endl;
	form.setSigned(1);
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int				Bureaucrat::getGrade( void ) const {

	return (this->_grade);
}

const string	Bureaucrat::getName( void ) const {

	return (this->_name);
}

/* ************************************************************************** */