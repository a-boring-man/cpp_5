/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:36:42 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/10 14:39:34 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern() {

	cout << "DEFAULT Intern constructor called" << endl;
	return;
}

Intern::Intern( const Intern & src ) {

	(void)src;
	cout << "COPY Intern constructor called" << endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern() {

	cout << "the Intern contract run out" << endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	(void)i;
	o << "it's just a Intern, nothing to see" << endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm*	Intern::makeForm( string name, string target ) const {

	string	tomatch[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int		i	=	-1;
	AForm*	form = NULL;
	
	while (++i < 3 && name.compare(tomatch[i])){}
	switch (i)
	{
		case 0 :
			form = new PresidentialPardonForm(target);
			break;
		case 1 :
			form = new RobotomyRequestForm(target);
			break;
		case 2 :
			form = new ShrubberyCreationForm(target);
			break;
		default:
			cout << "nor form matching the request";
	}
	if (i < 3)
		cout << "Intern creates : " << name << " form" << endl;
	return (form);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */