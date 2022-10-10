/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:24:45 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/10 10:43:49 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

int	main ( void ) {

	cout << endl << "---------------PRESIDENTIAL PARDON TEST : ----------------" << endl << endl;
	
	cout << endl << "---------------PRESIDENTIAL PARDON CREATION TEST : ----------------" << endl << endl;
	Bureaucrat 				B1;
	PresidentialPardonForm	PF1(B1.getName());
	PresidentialPardonForm	PF2("The Evil Chair");
	PresidentialPardonForm	PF3(PF2);
	PresidentialPardonForm	PF4;

	cout << endl << "---------------PRESIDENTIAL PARDON DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << PF2 << endl;
	cout << PF3 << endl;
	cout << PF4 << endl;

	cout << endl << "---------------PRESIDENTIAL PARDON ASSIGNATION TEST PF4 = PF1 TEST : ----------------" << endl << endl;
	PF4 = PF1;

	cout << endl << "---------------PRESIDENTIAL PARDON DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << PF2 << endl;
	cout << PF3 << endl;
	cout << PF4 << endl;

	cout << endl << "---------------PRESIDENTIAL PARDON EXECUTION TEST : ----------------" << endl << endl;
	
	try
	{
		B1.executeForm(PF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------PRESIDENTIAL PARDON SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(PF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.signForm(PF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.signForm(PF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.signForm(PF4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------PROMOTION TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	try
	{
		B1.promote(150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << B1 << endl;
	try
	{
		B1.promote(140);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << B1 << endl;
	
	cout << endl << "---------------PRESIDENTIAL PARDON EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(PF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------PRESIDENTIAL PARDON SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(PF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.signForm(PF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.signForm(PF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.signForm(PF4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------PRESIDENTIAL PARDON EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(PF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------PROMOTION TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	try
	{
		B1.promote(-1000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << B1 << endl;
	try
	{
		B1.promote(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << B1 << endl;

	cout << endl << "---------------PRESIDENTIAL PARDON EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(PF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B1.executeForm(PF4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	/* cout << endl << "---------------AForm WRONG CREATION TEST : ----------------" << endl << endl;
	try
	{
		PresidentialPardonForm F1 = PresidentialPardonForm("salut", 0, -3, 2);
	}
	catch(const std::exception& e)
	{
		cout << "couldn't create AForm because : ";
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

	cout << endl << "---------------CORRECT AFormULAR CREATION : ----------------" << endl << endl;
	PresidentialPardonForm F1;
	PresidentialPardonForm F2("boring AFormular", 0, 150, 150);
	PresidentialPardonForm F3("an other boring AFormular", 0, 56, 56);

	cout << endl << "---------------DISPLAY AForm : ----------------" << endl << endl;
	cout << F1 << endl;
	cout << F2 << endl;
	cout << F3 << endl;

	cout << endl << "---------------SIGNING AForm1 : ----------------" << endl << endl;
	try
	{
		F1.beSigned(B1);
	}
	catch(const AForm::GradeTooLowExeption & e)
	{
		std::cerr << e.what() << '\n';
	}
	F1.beSigned(B2);
	F1.beSigned(B3);
	try
	{
		F1.beSigned(B4);
	}
	catch(const AForm::GradeTooLowExeption & e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------SIGNING AForm2 : ----------------" << endl << endl;
	F2.beSigned(B1);
	F2.beSigned(B2);
	F2.beSigned(B3);
	F2.beSigned(B4);

	cout << endl << "---------------SIGNING AForm3 : ----------------" << endl << endl;
	try
	{
		F3.beSigned(B1);
	}
	catch(const AForm::GradeTooLowExeption & e)
	{
		std::cerr << e.what() << '\n';
	}
	F3.beSigned(B2);
	F3.beSigned(B3);
	F3.beSigned(B4);

	cout << endl << "---------------DISPLAY AForm : ----------------" << endl << endl;
	cout << F1 << endl;
	cout << F2 << endl;
	cout << F3 << endl;*/

	cout << endl << "---------------DESTRUCTION CALL : ----------------" << endl << endl;


	return (0);
}