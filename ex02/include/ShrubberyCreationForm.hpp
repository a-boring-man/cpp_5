/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:52:02 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/10 08:52:28 by jrinna           ###   ########lyon.fr   */
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

class ShrubberyCreationForm : public AForm
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm( const string target );
		~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		const string	getTarget() const;
		void			setTarget( const string target );

	private:

		const string	_target;

};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & F );
