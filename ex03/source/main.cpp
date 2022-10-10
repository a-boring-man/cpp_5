/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:24:45 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/10 13:38:34 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/Intern.hpp"

int	main ( void ) {

	cout << endl << "---------------BUREAUCRAT CREATION TEST : ----------------" << endl << endl;
	Bureaucrat 				B1;
	
	cout << endl << "---------------PRESIDENTIAL PARDON CREATION TEST : ----------------" << endl << endl;
	PresidentialPardonForm	PF1(B1.getName());
	PresidentialPardonForm	PF2("The Evil Chair");
	PresidentialPardonForm	PF3(PF2);
	PresidentialPardonForm	PF4;

	cout << endl << "---------------ROBOTOMY REQUEST CREATION TEST : ----------------" << endl << endl;
	RobotomyRequestForm	RF1(B1.getName());
	RobotomyRequestForm	RF2("The Evil Chair");
	RobotomyRequestForm	RF3(RF2);
	RobotomyRequestForm	RF4;

	cout << endl << "---------------SHRUBBERY CREATION CREATION TEST : ----------------" << endl << endl;
	ShrubberyCreationForm	SF1(B1.getName());
	ShrubberyCreationForm	SF2("The Evil Chair");
	ShrubberyCreationForm	SF3(SF2);
	ShrubberyCreationForm	SF4;

	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << PF2 << endl;
	cout << PF3 << endl;
	cout << PF4 << endl;
	cout << RF1 << endl;
	cout << RF2 << endl;
	cout << RF3 << endl;
	cout << RF4 << endl;
	cout << SF1 << endl;
	cout << SF2 << endl;
	cout << SF3 << endl;
	cout << SF4 << endl;

	cout << endl << "---------------ASSIGNATION TEST PF4 = PF1 TEST : ----------------" << endl << endl;
	PF4 = PF1;
	RF4 = RF1;
	SF4 = SF1;

	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << PF4 << endl;
	cout << RF1 << endl;
	cout << RF4 << endl;
	cout << SF1 << endl;
	cout << SF4 << endl;

	cout << endl << "---------------SHRUBBERY CREATION EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(RF1);
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

	cout << endl << "---------------SHRUBBERY CREATION SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(RF1);
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

	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << RF1 << endl;
	cout << SF1 << endl;

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
	B1.promote(10);
	cout << B1 << endl;
	
	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << RF1 << endl;
	cout << SF1 << endl;

	cout << endl << "---------------SHRUBBERY CREATION EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(RF1);
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

	cout << endl << "---------------SHRUBBERY CREATION SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(RF1);
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

	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << RF1 << endl;
	cout << SF1 << endl;

	cout << endl << "---------------PROMOTION TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	try
	{
		B1.promote(-1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << B1 << endl;
	B1.promote(7);
	cout << B1 << endl;
	
	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << RF1 << endl;
	cout << SF1 << endl;

	cout << endl << "---------------SHRUBBERY CREATION EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(RF1);
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

	cout << endl << "---------------SHRUBBERY CREATION SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(RF1);
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

	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << RF1 << endl;
	cout << SF1 << endl;

	cout << endl << "---------------PROMOTION TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	try
	{
		B1.promote(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << B1 << endl;
	B1.promote(80);
	cout << B1 << endl;
	
	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << RF1 << endl;
	cout << SF1 << endl;

	cout << endl << "---------------SHRUBBERY CREATION EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(RF1);
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

	cout << endl << "---------------SHRUBBERY CREATION SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(RF1);
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

	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << RF1 << endl;
	cout << SF1 << endl;

	cout << endl << "---------------PROMOTION TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	B1.promote(32);
	cout << B1 << endl;
	
	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << RF1 << endl;
	cout << SF1 << endl;

	cout << endl << "---------------SHRUBBERY CREATION EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(RF1);
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

	cout << endl << "---------------SHRUBBERY CREATION SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(RF1);
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

	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << RF1 << endl;
	cout << SF1 << endl;

	cout << endl << "---------------PROMOTION TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	B1.promote(20);
	cout << B1 << endl;
	
	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << RF1 << endl;
	cout << SF1 << endl;

	cout << endl << "---------------SHRUBBERY CREATION EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST EXECUTION TEST : ----------------" << endl << endl;
	try
	{
		B1.executeForm(RF1);
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

	cout << endl << "---------------SHRUBBERY CREATION SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(SF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl << "---------------ROBOTOMY REQUEST SIGNED TEST : ----------------" << endl << endl;
	try
	{
		B1.signForm(RF1);
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

	cout << endl << "---------------FORM DISPLAY TEST : ----------------" << endl << endl;
	cout << B1 << endl;
	cout << PF1 << endl;
	cout << RF1 << endl;
	cout << SF1 << endl;

	cout << endl << "---------------DESTRUCTION CALL : ----------------" << endl << endl;

	return (0);
}