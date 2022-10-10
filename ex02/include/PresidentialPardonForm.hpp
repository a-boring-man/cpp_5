/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:51:12 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/10 08:56:48 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "AForm.hpp"

using std::cout;
using std::endl;
using std::string;

class AForm;

class PresidentialPardonForm : public AForm
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm( const string target );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		const string	getTarget() const;
		void			setTarget( const string target );

		void	execute( Bureaucrat const & executor ) const;

	private:

		const string	_target;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & F );
