/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:24:42 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/06 14:05:06 by jrinna           ###   ########lyon.fr   */
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

Bureaucrat::Bureaucrat( const string name, int grade ) : _name(name), _grade(grade) {

	cout << "NAMED Bureaucrat constructor called" << endl;
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
	{
		throw Bureaucrat::GradeTooHighExeption();
	}
	else
	{
		this->_grade -= i;
		cout << this->getName() << " has been promoted, his/her grade is now : " << this->getGrade() << endl;
	}
	return;
}

void	Bureaucrat::unpromote( int i ) {

	if (this->_grade + i > 150)
	{
		throw Bureaucrat::GradeTooLowExeption();
	}
	else
	{
		this->_grade += i;
		cout << this->getName() << " has been unpromoted, his/her grade is now : " << this->getGrade() << endl;
	}
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