/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:52:22 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/07 14:14:36 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("PShrubberyCreationForm", 0, 145, 137) {

	cout << "DEFAULT ShrubberyCreationForm constructor called" << endl;
	return;
}


ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) {

	cout << "COPY ShrubberyCreationForm constructor called" << endl;
	setSigned(src.getSigned());
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm() {

	cout << "PresidentialPardonForm destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->setSigned(rhs.getSigned());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & F )
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