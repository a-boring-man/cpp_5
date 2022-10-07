/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:52:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/07 14:14:33 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 0, 25, 5) {

	cout << "DEFAULT PresidentialPardonForm constructor called" << endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) {

	cout << "COPY PresidentialPardonForm constructor called" << endl;
	setSigned(src.getSigned());
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
		this->setSigned(rhs.getSigned());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & F )
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