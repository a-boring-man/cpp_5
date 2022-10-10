/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:52:19 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/10 11:56:30 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 0, 72, 45), _target("NOT_SEPCIFIED") {

	cout << "DEFAULT RobotomyRequestForm constructor called" << endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm("RobotomyRequestForm", 0, 72, 45), _target(src.getTarget()){

	cout << "RobotomyRequestForm constructor called" << endl;
	setSigned(src.getSigned());
	return;
}

RobotomyRequestForm::RobotomyRequestForm( const string target ) : AForm("RobotomyRequestForm", 0, 72, 45), _target(target) {

	cout << "TARGETED RobotomyRequestForm constructor called" << endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm() {

	cout << "RobotomyRequestForm destructor called" << endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		cout << "ASSIGNMENT OPERATOR CALLED" << endl;
		this->setSigned(rhs.getSigned());
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & F )
{
	o << "Name : " << F.getName() << endl << "Signed status : " << F.getSigned() << endl << "Grade to signed : " << F.getGTS() << endl << "Grade to execute : " << F.getGTE() << endl << "Target : " << F.getTarget() << endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {

	this->CheckExecuteCondition(executor);
	if (rand() % 2)
		cout << this->getTarget() << " has been robotomized" << endl;
	else
		cout << this->getTarget() << " Failed to be robotomized" << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const string	RobotomyRequestForm::getTarget( void ) const {

	return (this->_target);
}

void			RobotomyRequestForm::setTarget( const string target ) {

	string* tmp;
	tmp = (string*)&this->_target;
	*tmp = target;
	return;
}

/* ************************************************************************** */