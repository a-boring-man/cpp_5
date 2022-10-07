/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:52:19 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/07 14:15:33 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 0, 72, 45) {

	cout << "DEFAULT RobotomyRequestForm constructor called" << endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) {

	cout << "RobotomyRequestForm constructor called" << endl;
	setSigned(src.getSigned());
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
		this->setSigned(rhs.getSigned());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & F )
{
	o << "Name : " << F.getName() << endl << "Signed status : " << F.getSigned() << endl << "Grade to signed : " << F.getGTS() << endl << "Grade to execute : " << F.getGTE() << endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */