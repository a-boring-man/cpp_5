/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:52:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/10 10:41:04 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 0, 25, 5), _target("NOT_SEPCIFIED") {

	cout << "DEFAULT PresidentialPardonForm constructor called" << endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : AForm("PresidentialPardonForm", 0, 25, 5), _target(src.getTarget()) {

	cout << "COPY PresidentialPardonForm constructor called" << endl;
	setSigned(src.getSigned());
	return;
}

PresidentialPardonForm::PresidentialPardonForm( const string target ) : AForm("PresidentialPardonForm", 0, 25, 5), _target(target) {

	cout << "TARGETED PresidentialPardonForm constructor called" << endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm() {

	cout << "PresidentialPardonForm destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		cout << "ASSIGNMENT OPERATOR CALLED" << endl;
		this->setSigned(rhs.getSigned());
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & F )
{
	o << "Name : " << F.getName() << endl << "Signed status : " << F.getSigned() << endl << "Grade to signed : " << F.getGTS() << endl << "Grade to execute : " << F.getGTE() << endl << "Target : " << F.getTarget() << endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {

	this->CheckExecuteCondition(executor);
	cout << this->_target << " has been forgiven for his/her/its sins by Zaphod Beeblebrox" << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const string	PresidentialPardonForm::getTarget( void ) const {

	return (this->_target);
}

void			PresidentialPardonForm::setTarget( const string target ) {

	string* tmp;
	tmp = (string*)&this->_target;
	*tmp = target;
	return;
}

/* ************************************************************************** */