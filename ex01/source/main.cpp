/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:24:45 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/06 14:16:39 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main ( void ) {

	cout << endl << "---------------BUREAUCRAT CREATION : ----------------" << endl << endl;
	Bureaucrat	B1;
	Bureaucrat	B2("philipe Iin", 1);
	Bureaucrat	B3(B2);

	cout << endl << "---------------DISPLAY BUREAUCRAT : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << B2 << endl;
	cout << B3 << endl;

	cout << endl << "---------------PROMOTE TEST : ----------------" << endl << endl;
	B1.promote(42);
	try
	{
		B2.promote(42);
	}
	catch(const Bureaucrat::GradeTooHighExeption& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ASSIGNATION TEST B1=B2 : ----------------" << endl << endl;
	B1 = B2;

	cout << endl << "---------------DISPLAY BUREAUCRAT : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << B2 << endl;
	cout << B3 << endl;

	cout << endl << "---------------UNPROMOTE TEST : ----------------" << endl << endl;
	B2.unpromote(130);
	try
	{
		B3.unpromote(150);
	}
	catch(const Bureaucrat::GradeTooLowExeption& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------DISPLAY BUREAUCRAT : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << B2 << endl;
	cout << B3 << endl;

	cout << endl << "---------------DESTRUCTION CALL : ----------------" << endl << endl;
	return (0);
}