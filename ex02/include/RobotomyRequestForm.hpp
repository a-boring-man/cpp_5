/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:51:48 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/10 11:13:38 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "AForm.hpp"
# include <cstdlib>

using std::cout;
using std::endl;
using std::string;

class AForm;

class RobotomyRequestForm : public AForm
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm( const string target );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		const string	getTarget() const;
		void			setTarget( const string target );

		void	execute( Bureaucrat const & executor ) const;

	private:

		const string	_target;

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & F );
