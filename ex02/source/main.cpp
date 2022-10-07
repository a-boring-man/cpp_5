/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:24:45 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/07 13:29:16 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main ( void ) {

	cout << endl << "---------------FORM WRONG CREATION TEST : ----------------" << endl << endl;
	try
	{
		Form F1 = Form("salut", 0, -3, 2);
	}
	catch(const std::exception& e)
	{
		cout << "couldn't create Form because : ";
		std::cerr << e.what() << '\n';
	}
	
	cout << endl << "---------------BUREAUCRAT CREATION : ----------------" << endl << endl;
	Bureaucrat	B1;
	Bureaucrat	B2("philipe Iin", 1);
	Bureaucrat	B3(B2);
	Bureaucrat	B4("Merline oua", 56);

	cout << endl << "---------------DISPLAY BUREAUCRAT : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << B2 << endl;
	cout << B3 << endl;
	cout << B4 << endl;

	cout << endl << "---------------CORRECT FORMULAR CREATION : ----------------" << endl << endl;
	Form F1;
	Form F2("boring formular", 0, 150, 150);
	Form F3("an other boring formular", 0, 56, 56);

	cout << endl << "---------------DISPLAY FORM : ----------------" << endl << endl;
	cout << F1 << endl;
	cout << F2 << endl;
	cout << F3 << endl;

	cout << endl << "---------------SIGNING FORM1 : ----------------" << endl << endl;
	try
	{
		F1.beSigned(B1);
	}
	catch(const Form::GradeTooLowExeption & e)
	{
		std::cerr << e.what() << '\n';
	}
	F1.beSigned(B2);
	F1.beSigned(B3);
	try
	{
		F1.beSigned(B4);
	}
	catch(const Form::GradeTooLowExeption & e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------SIGNING FORM2 : ----------------" << endl << endl;
	F2.beSigned(B1);
	F2.beSigned(B2);
	F2.beSigned(B3);
	F2.beSigned(B4);

	cout << endl << "---------------SIGNING FORM3 : ----------------" << endl << endl;
	try
	{
		F3.beSigned(B1);
	}
	catch(const Form::GradeTooLowExeption & e)
	{
		std::cerr << e.what() << '\n';
	}
	F3.beSigned(B2);
	F3.beSigned(B3);
	F3.beSigned(B4);

	cout << endl << "---------------DISPLAY FORM : ----------------" << endl << endl;
	cout << F1 << endl;
	cout << F2 << endl;
	cout << F3 << endl;

	cout << endl << "---------------DESTRUCTION CALL : ----------------" << endl << endl;

	
	return (0);
}